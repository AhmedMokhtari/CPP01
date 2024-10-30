#include "Harl.hpp"

void Harl::debug( void ){
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n" << std::endl;
}

void Harl::info( void ){
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning( void ){
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error( void ){
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}
typedef void (Harl::*method_function)();
void Harl::complain( std::string level)
{
    int i = 0;
    void (Harl::*p[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    // method_function method_pointer[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            break ;
    }
    switch (i){
        case 0 :
            (this->*p[i++])();
        case 1 :
            (this->*p[i++])();
        case 2 :
            (this->*p[i++])();
        case 3 :
            (this->*p[i])();
            break ;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}