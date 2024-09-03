#include <iostream>
#include <cmath> // For sqrt and pow functions
using namespace std;

class Point
{
public:
    int x;
    int y;

    // Parameterized constructor
    Point(int xCoord, int yCoord)
    {
        x = xCoord;
        y = yCoord;
    }

    // Method to calculate distance from another point
    double calculateDistance(Point otherPoint)
    {
        return sqrt(pow(x - otherPoint.x, 2) + pow(y - otherPoint.y, 2));
    }
};

int main()
{
    // Creating two objects using the parameterized constructor
    Point p1(3, 4);
    Point p2(0, 0);

    // Calculating the distance between p1 and p2
    cout << "Distance between p1 and p2: " << p1.calculateDistance(p2) << endl;

    return 0;
}
