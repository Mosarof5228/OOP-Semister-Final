#include <iostream>
#include <conio.h>
using namespace std;
class Student
{
public:
    int id;
    double gpa;
    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    void display()
    {
        cout << id << " " << gpa << endl;
    }
};
int main()
{
    Student mosarof(101, 2.44);
    mosarof.display();

    Student lima(102, 4.44);
    lima.display();
}