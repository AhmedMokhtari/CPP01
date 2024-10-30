#include "Harl.hpp"

void Harl::debug( void ){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ){
    std::cout << "I cannot believe adding extra bacon costs more money.\n You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ){
    std::cout << "I think I deserve to have some extra bacon for free.\n I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
typedef void (Harl::*method_function)();
void Harl::complain( std::string level)
{
    void (Harl::*p[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    method_function method_pointer[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*p[i])();
            // method_function tmp = method_pointer[i];
            // (this->*tmp)();
            return ;
        }
    }
    std::cout << "Invalide level please choise from {DEBUG, INFO, WARNING, ERROR}\n";
    // std::cout << "[ Probably complaining about insignificant problems ]\n";
}