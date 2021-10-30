#ifndef _WRONGANIMAL_HPP
#define _WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal&);
        void    operator=(const WrongAnimal&);
        ~WrongAnimal();

        void    makeSound() const ;
        std::string    getType() const ;
};

#endif