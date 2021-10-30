#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal&);
        void    operator=(const Animal&);
        virtual ~Animal();

        virtual void    makeSound() const ;
        std::string    getType() const ;
};

#endif