/*

Inheritance in C++ is a fundamental object-oriented programming concept that allows a class (called the derived class) to inherit attributes and behaviors (data members and member functions) from another class (called the base class).
*/

#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "This animal eats food." << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "The dog barks." << endl;
    }
};

int main()
{
    Dog myDog;

    myDog.eat();

    myDog.bark();
    return 0;
}
