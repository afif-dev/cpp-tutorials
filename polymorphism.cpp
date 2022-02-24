#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal
{
public:
    void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};
// Derived class
class Cow : public Animal
{
public:
    void animalSound()
    {
        cout << "The cow says: moow... \n";
    }
};
// Derived class
class Cat : public Animal
{
public:
    void animalSound()
    {
        cout << "The cat says: meow! \n";
    }
};
int main()
{
    Animal myAnimal;
    Cow myCow;
    Cat myCat;

    myAnimal.animalSound();
    myCow.animalSound();
    myCat.animalSound();
    
    cin.get();
    return 0;
}
