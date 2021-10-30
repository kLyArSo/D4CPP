#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
    private:
        Brain   *Braiinzzzzz;
    public:
        Cat();
        Cat(const Cat&);
        Cat(std::string idea);
        void    operator=(const Cat&);
        ~Cat();
        
        void    makeSound() const ;
};

#endif