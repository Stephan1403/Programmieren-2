#include "DynamicObject.h"

class Radio : public DynamicObject{

    public:
        bool init(){
            std::cout << "Radio channel has been set" << std::endl;
        }

        void update(){
            std::cout << "Update of radio channel" << std::endl;
        }
};