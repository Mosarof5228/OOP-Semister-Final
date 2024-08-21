#include <iostream>
using namespace std;
class Employee
{
public:
    int salary;
    int hour;
    void EmpInfo(int s, int h)
    {
        salary = s;
        hour = h;
    }
    void AddSal()
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
    emp1.EmpInfo(1000, 6);
    emp1.AddSal();
    emp1.AddWork();

    cout << "Final Salary : " << emp1.GetSalary() << "Taka";
}