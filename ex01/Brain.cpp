#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "| Brain | is Here\n";
    for (int i = 0; i < 100;    i++)
        this->ideas[i] = "Fresh Ideazzz";
}
Brain::Brain(std::string Idea)
{
    std::cout << "| Brain | is Here\n";
    for (int i = 0; i < 100;    i++)
        this->ideas[i] = Idea;
}

Brain::Brain(const Brain&   other)
{
    (*this) = other;
}

void    Brain::operator=(const Brain& other)
{
    for (int i = 0; i < 100;    i++)
        this->ideas[i] = other.ideas[i];
}

Brain::~Brain()
{
    std::cout << "| Brain | is No Longer Here\n"; 
}