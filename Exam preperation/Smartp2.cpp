#include <iostream>
#include <memory>
#include <vector>

class Player;
class Weapon;


class Level{
    public:
        Level(){

        }


};


class Player{
    public:
        Player(){std::cout << "Created a new Player" << std::endl;}
        ~Player(){std::cout << "Player has been destructed" << std::endl;}

        void add_weapon(std::weak_ptr<Weapon> w_ptr){
            weapon_store.push_back(w_ptr);
        }

    private:
        std::vector< std::weak_ptr<Weapon> > weapon_store;
};


class Weapon{
    public:
        Weapon(std::shared_ptr<Player> player_ptr, int dam=100){
            this->player = player_ptr;
            this->damage = dam;
            std::cout << "Created new pistol" << std::endl;
        }
        ~Weapon(){std::cout << "Weapon destoyed" << std::endl;}

        void get_damage(){
            std::cout << "Damage = " << this->damage << std::endl;
        }

        void loose_owner(){
            this->player.reset();
        }

    private:
        int damage;
        std::weak_ptr<Player> player;
};






int main(){
    std::shared_ptr<Player> player1 = std::make_shared<Player>( );
    std::shared_ptr<Weapon> pistol = std::make_shared<Weapon>( player1, 100 );

    std::weak_ptr<Weapon> pistol_weak = pistol;

    player1->add_weapon(pistol_weak);

    std::cout << "Player count: " << player1.use_count() << std::endl;
    std::cout << "Pistol count: " << pistol.use_count() << std::endl;


    pistol->get_damage();


//remove player refrences
    player1.reset();
    pistol->loose_owner();


    std::cout << "\nWeapon still not destroyed\n" << std::endl;

}