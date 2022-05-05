#include "DynamicObject.h"

class Player : public DynamicObject{

    public:
        bool init(){
            std::cout << "Player position has been set" << std::endl;
        }

        void update(){
            std::cout << "Update of player position" << std::endl;
        }
};