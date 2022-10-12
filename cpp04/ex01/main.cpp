#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
    {
        const Animal* j = new Dog(); 
        const Animal* i = new Cat();

        delete j;//should not create a leak delete i;
        delete i;
    }
    // std::cout << "\n\n***************\n\n";
    // {
    //     const Dog* dog = new Dog();
    //     const Dog* copy_dog = new Dog(*dog);

    //     std::cout << &(dog->brain) << std::endl;
    //     std::cout << &(copy_dog->brain) << std::endl;
    // }
    // std::cout << "\n\n***************\n\n";
    // {
    //     const Cat* cat = new Cat();
    //     const Cat* copy_cat = new Cat(*cat);

    //     std::cout << &(cat->brain) << std::endl;
    //     std::cout << &(copy_cat->brain) << std::endl;
    // }
    return 0; 
}