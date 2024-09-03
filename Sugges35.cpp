#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    // Parameterized constructor
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    // Method to calculate the area
    int calculateArea()
    {
        return length * width;
    }

    // Method to calculate the perimeter
    int calculatePerimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    // Creating an object using the parameterized constructor
    Rectangle rect1(10, 5);
    cout << "Area: " << rect1.calculateArea() << ", Perimeter: " << rect1.calculatePerimeter() << endl;

     return 0;
}
