#include <iostream>

class Zombie{
    private :
        std::string name;
    public :
        Zombie(const std::string &name);
       ~Zombie();
        void announce( void );

};