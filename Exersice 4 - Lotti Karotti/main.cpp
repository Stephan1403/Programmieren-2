#include "./classes/Spielfeld.h"

int main(){

    //create new Spielfeld
    Spielfeld spiel(2); //create game if amount of players;
    spiel.init(&spiel, "Max", "Tom"); //initalize game

    spiel.turn();


}


