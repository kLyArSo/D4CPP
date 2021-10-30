#ifndef _BRAIN_HPP
#define _BRAIN_HPP

#include <iostream>

class   Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain&);
        Brain(std::string Idea);
        void    get_i_th_idea(int i){std::cout << this->ideas[i]<< std::endl;}
        void    operator=(const Brain&);
        ~Brain();

};
#endif