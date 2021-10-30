#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "| Dog |";
    std::cout << "is here.\n";
}

Dog::Dog(const Dog& othr)
{
    (*this) = othr;
}

void    Dog::operator=(const Dog& othr)
{
    this->type = othr.type;
}
void    Dog::makeSound() const 
{
    std::cout << "| Dog |";
    std::cout << "is making its sound.\n";
}
Dog::~Dog()
{
    std::cout << "| Dog |";
    std::cout << "is no longer here.\n";
}