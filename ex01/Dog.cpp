#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "| Dog |";
    std::cout << "is here.\n";
    this->Braiinzzzzz = new Brain();
}

Dog::Dog(std::string idea)
{
    this->type = "Dog";
    std::cout << "| Dog |";
    std::cout << "is here.\n";
    this->Braiinzzzzz = new Brain(idea);
}

Dog::Dog(const Dog& othr)
{
    this->Braiinzzzzz = new Brain();
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
    delete this->Braiinzzzzz;
    std::cout << "| Dog |";
    std::cout << "is no longer here.\n";
}