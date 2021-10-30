#include "Animal.hpp"
Animal::Animal()
{
    this->type = "Animal";
    std::cout << "| Animal |";
    std::cout << "is here.\n";
}

Animal::Animal(const Animal& othr)
{
    (*this) = othr;
}

void    Animal::operator=(const Animal& othr)
{
    this->type = othr.type;
}

Animal::~Animal()
{
    std::cout << "| Animal |";
    std::cout << "is no longer here.\n";
}
void    Animal::makeSound() const 
{
    std::cout << "| Animal |";
    std::cout << "is making its sound.\n";
}


std::string    Animal::getType() const 
{
    return (type);
}