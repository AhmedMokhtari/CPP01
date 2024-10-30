#include <iostream>

class Zombie{
    private :
        std::string name;
    public :
        Zombie();
        std::string get_name(void) const;
        void set_name(const std::string &name);
        Zombie(const std::string &name);
       ~Zombie();
        void announce( void );

};