#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "| WrongAnimal |";
    std::cout << "is here.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& othr)
{
    (*this) = othr;
}

void    WrongAnimal::operator=(const WrongAnimal& othr)
{
    this->type = othr.type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "| WrongAnimal |";
    std::cout << "is no longer here.\n";
}
void    WrongAnimal::makeSound() const 
{
    std::cout << "| WrongAnimal |";
    std::cout << "is making its sound.\n";
}


std::string    WrongAnimal::getType() const 
{
    return (type);
}