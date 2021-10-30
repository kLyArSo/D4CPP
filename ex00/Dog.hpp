#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog&);
        void    operator=(const Dog&);
        ~Dog();
        
        void    makeSound() const ;
};

#endif