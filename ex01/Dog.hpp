#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *Braiinzzzzz;
    public:
        Dog();
        Dog(const Dog&);
        Dog(std::string idea);
        void    operator=(const Dog&);
        ~Dog();
        Brain    *Get_Brainz(){return Braiinzzzzz;}
        void    makeSound() const ;
};

#endif