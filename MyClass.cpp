#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
public:
    int id;
    double gpa;
};
int main()
{
    Student Alim, Selim;
    Alim.id = 101;
    Alim.gpa = 4.44;

    cout << Alim.id << " " << Alim.gpa << endl;

    Selim.id = 102;
    Selim.gpa = 2.22;
    cout << Selim.id << " " << Selim.gpa;
}