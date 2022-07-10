#include <iostream>

#include <fstream>  //Zum lesen von und schreiben in Dateien



int main(){

    std::fstream stream;

    stream.open("test.txt", std::ios::out);


    if (!stream){
        std::cout << "Datei konnte nicht geöffnet werden";
    }else{

        for(size_t i=0; i<100; i++){

            stream << "Zahl ist: " << std::setw(5) << i << std::endl;
            // setw for setting the field width
        }

        /*
        while (!stream.eof())   // Solange ende des files nicht erreicht
        {
            std::string var;
            getline(stream, var);
            std::cout << var << std::endl;
        }
        */

    if(stream.is_open())
        stream.close();

    }



    //Binär
    std::fstream bin_stream;
    bin_stream.open("binfile.dat", std::ios::binary | std::ios::out);


    /*
    while(!bin_stream.eof()){

        double teiler = 0.0;
        bin_stream.read( (char*)&teiler, sizeof(teiler) );
        std::cout << "Gelesen: " << teiler << std::endl;
    }
    */
    
    struct User{
        char name[20];
        int id;
    };

    //Array of users
    User UserStore[3] = { {"Mike", 1}, {"Leo", 2}, {"Nils", 3} };

    for(size_t i=0; i< sizeof(UserStore) / sizeof(User); i++){  // Iterate through all Users in UserStore
        bin_stream.write( (char*)&UserStore[i], sizeof(User) ); // Write user in file
    }
    
    bin_stream.close();

    //read array
    // Define stream for reading bin data
    bin_stream.open("binfile.dat", std::ios::binary | std::ios::in);   

    while(!bin_stream.eof()){  // Iterate through all Users in UserStore
        User u_store;                                           // User in that the data is stored
        bin_stream.read( (char*)&u_store, sizeof(User) );           // Each user is stored in a local User object u_store
        std::cout << "User " << u_store.name << " with Id: " << u_store.id << std::endl;
    }

    bin_stream.close();

    


    /*
    for(size_t i=0; i<100; i++){
        double teiler = i / 100.0;
        std::cout << "Teiler: " << teiler;
        bin_stream.write( (char*)&teiler, sizeof(teiler) );
    }
    bin_stream.close();
    */

}