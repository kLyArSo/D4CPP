#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#define N 4
int main()
{
    // {
    //     const Animal* meta = new Animal();
    //     const Animal* j = new Dog();
    //     const Animal* i = new Cat();
    
    //     std::cout << j->getType() << " " << std::endl;
    //     std::cout << i->getType() << " " << std::endl;
    //     i->makeSound();
    //     j->makeSound();
    //     meta->makeSound();
    //     std::cout << "----------------------------------------------\n";
    // }

    // {
    //     const WrongAnimal* meta = new WrongAnimal();
    //     const WrongAnimal* i = new WrongCat();

    //     std::cout << i->getType() << " " << std::endl;
    //     i->makeSound();
    //     meta->makeSound(); 
    // }
    // {
    //     Animal* Array[N];
    //     for (int i = 0; i < (N / 2) ; i++)
    //     {
    //         Array[i] = new Dog("IDEA1");
    //     }
    //     for (int i = (N / 2) ; i < N; i++)
    //     {
    //         Array[i] = new Cat("IDEA2");
    //     }
        
    //     for (int i = 0 ; i < N; i++)
    //     {
    //         delete Array[i];
    //     }
    // }
    
    {
        Dog*        klb1 = new Dog();
        Brain*      keda1 = klb1->Get_Brainz();
        keda1->get_i_th_idea(50);
/*-------------------------------------------------*/
        Dog*        klb2 = new Dog("KEDA");
        Brain*      keda2 = klb2->Get_Brainz();
        keda2->get_i_th_idea(50);
/*-------------------------------------------------*/
        Dog        klb3(*klb2);
        Brain*      keda3 = klb3.Get_Brainz();
        keda3->get_i_th_idea(50);       
    } 
}