#include <iostream>
using namespace std;
class Shape
{
public:
    void display()
    {
        cout << "This is shape class" << endl;
    }
};
class Circle : public Shape
{
public:
    void display()
    {
        cout << "this is circle class" << endl;
    }
};
class Square : public Shape
{
public:
    void display()
    {
        cout << "this is square";
    }
};

int main()
{
    Shape S;
    Circle C;
    Square T;
    S.display();
    C.display();
    T.display();
}