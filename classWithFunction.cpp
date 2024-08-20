#include <iostream>
#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    double gpa;
    void function()
    {
        cout << id << " " << gpa << endl;
    }
};
int main()
{
    Student mosarof, lima;
    mosarof.id = 100;
    mosarof.gpa = 3.44;

    lima.id = 2101;
    lima.gpa = 4.44;

    mosarof.function();
    lima.function();
}