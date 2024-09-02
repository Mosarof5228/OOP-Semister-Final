#include <iostream>
using namespace std;
class Employee
{
public:
    int salary, hour;
    void EmpInfo(int s, int h)
    {
        salary = s;
        hour = h;
    }
    void Addsal()
    {
        if (salary < 1200)
        {
            salary = salary + 600;
        }
    }
    void AddWork()
    {
        if (hour > 5)
        {
            salary = salary + 700;
        }
    }
    int GetSalary()
    {
        return salary;
    }
};
int main()
{
    Employee emp1;
    emp1.EmpInfo(500, 7);
    emp1.Addsal();
    emp1.AddWork();
    cout << "salary is: " << emp1.GetSalary();
}