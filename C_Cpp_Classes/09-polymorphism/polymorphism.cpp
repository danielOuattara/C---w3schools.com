

/* C++ Polymorphism
   ==================

Polymorphism means "many forms", and it occurs when we have
many classes that are related to each other by inheritance.

Like we specified in the previous chapter: Inheritance lets us
inherit attributes and methods from another class. Polymorphism
uses those methods to perform different tasks. This allows us
to perform a single action in different ways.


For example, think of a base class called Animal that has a
method called animalSound(). Derived classes of Animals could
be Pigs, Cats, Dogs, Birds, etc... and they also have their own
implementation of an animal sound: the pig oinks, and the cat
meows, the dog barks, and so on ... */

//  #include <iostream>
// // Base class

// class Animal
// {
// public:
//     void animalSound()
//     {
//         std::cout << "The animal makes a sound \n";
//     }
// };

// // Derived class

// class Pig : public Animal
// {
// public:
//     void animalSound()
//     {
//         std::cout << "The pig sounds: wee wee \n";
//     }
// };

// // Derived class

// class Dog : public Animal
// {
// public:
//     void animalSound()
//     {
//         std::cout << "The dog sounds: bow wow \n";
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Animal animal;
//     animal.animalSound();

//     Pig pig;
//     pig.animalSound();

//     Dog dog;
//     dog.animalSound();
//     return 0;
// }

/* Remember from the Inheritance chapter that we use the
':' operator to inherit from a class.

Now we can create Pig and Dog objects and override the
animalSound() method */

#include <iostream>
// Base class

class Animal
{
public:
    void animalSound()
    {
        std::cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal
{
public:
    void animalSound()
    {
        std::cout << "The pig sounds: wee wee \n";
    }
};

// Derived class
class Dog : public Animal
{
public:
    void animalSound()
    {
        std::cout << "The dog sounds: bow wow \n";
    }
};

int main()
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}

/* Why And When To Use "Inheritance" and "Polymorphism" ?
---------------------------------------------------------

- It is useful for code reusability: reuse attributes and
  methods of an existing class when you create a new class.

*/