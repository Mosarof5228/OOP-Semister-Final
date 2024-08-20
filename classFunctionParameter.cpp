#include <iostream>
#include <conio.h>
using namespace std;
class Student
{
public:
    int id;
    double gpa;
    void setValue(int x, double y)
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

    Student mosarof, lima;
    mosarof.setValue(100, 2.22);
    mosarof.display();
}