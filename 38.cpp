#include <iostream>
using namespace std;
class Shape
{
public:
    void display()
    {
        cout << "this is shape class for polimorphism" << endl;
    }
};
class Circle : public Shape
{
public:
    void display()
    {
        cout << "this is Circle class" << endl;
    }
};
class Square : public Shape
{
public:
    void display()
    {
        cout << "this is square class" << endl;
    }
};
int main()
{
    Shape s;
    Circle c;
    Square sq;
    s.display();
    c.display();
    sq.display();
}