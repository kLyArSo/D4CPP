#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat&);
        void    operator=(const Cat&);
        ~Cat();
        
        void    makeSound() const ;
};

#endif