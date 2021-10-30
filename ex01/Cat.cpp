#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->Braiinzzzzz = new Brain();
    std::cout << "| Cat |";
    std::cout << "is here.\n";
}
Cat::Cat(std::string idea)
{
    this->type = "Cat";
    this->Braiinzzzzz = new Brain(idea);
    std::cout << "| Cat |";
    std::cout << "is here.\n";
}
Cat::Cat(const Cat& othr)
{
    this->Braiinzzzzz = new Brain();
    (*this) = othr;
}

void    Cat::operator=(const Cat& othr)
{
    this->type = othr.type;
    this->Braiinzzzzz = new Brain;
    *(this->Braiinzzzzz) = *(othr.Braiinzzzzz);
}
void    Cat::makeSound() const 
{
    std::cout << "| Cat |";
    std::cout << "is making its sound.\n";
}
Cat::~Cat()
{
    delete this->Braiinzzzzz;
    std::cout << "| Cat |";
    std::cout << "is no longer here.\n";
}