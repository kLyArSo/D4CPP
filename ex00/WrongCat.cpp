#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "| WrongCat |";
    std::cout << "is here.\n";
}

WrongCat::WrongCat(const WrongCat& othr)
{
    (*this) = othr;
}

void    WrongCat::operator=(const WrongCat& othr)
{
    this->type = othr.type;
}
void    WrongCat::makeSound() const 
{
    std::cout << "| WrongCat |";
    std::cout << "is making its sound.\n";
}
WrongCat::~WrongCat()
{
    std::cout << "| WrongCat |";
    std::cout << "is no longer here.\n";
}