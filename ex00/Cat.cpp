#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "| Cat |";
    std::cout << "is here.\n";
}

Cat::Cat(const Cat& othr)
{
    (*this) = othr;
}

void    Cat::operator=(const Cat& othr)
{
    this->type = othr.type;
}
void    Cat::makeSound() const 
{
    std::cout << "| Cat |";
    std::cout << "is making its sound.\n";
}
Cat::~Cat()
{
    std::cout << "| Cat |";
    std::cout << "is no longer here.\n";
}