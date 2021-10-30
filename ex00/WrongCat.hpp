#ifndef _WRONGCAT_HPP
#define _WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat&);
        void    operator=(const WrongCat&);
        ~WrongCat();
        
        void    makeSound() const ;
};

#endif
