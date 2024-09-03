#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    // Parameterized constructor
    Student(int i, string n)
    {
        id = i;
        name = n;
    }

    // Default constructor
    Student()
    {
        cout << "I am a new student" << endl;
    }
};

int main()
{
    // Creating an object using the parameterized constructor
    Student ob1(100, "Mosarof");
    cout << "ID: " << ob1.id << ", Name: " << ob1.name << endl;

    // Creating an object using the default constructor
    Student ob2; // Calls the default constructor

    return 0;
}
