// private specifier er data class er baire theke access kora jaina direactly
// tai private data goli k use korar jonne ba access korar jonne setter and getter function use korte hobe
// setter er maddhome data set kore dibo and getter function er maddhome data return kore dibo.
/*#include <iostream>
#include <conio.h>
using namespace std;
class Car
{
private:
    string carName;

public:
    void setValue(string x)
    {
        carName = x;
    }
    string getValue()
    {
        return carName;
    }
};
int main()
{
    Car privateCar;
    privateCar.setValue("xcorolla");
    cout << privateCar.getValue();
}

*/

#include <iostream>
#include <conio.h>
using namespace std;
class Car
{
private:
    string carName;
    string carModel;
    int carPrice;

public:
    void setValue(string x, string y, int z)
    {
        carName = x;
        carModel = y;
        carPrice = z;
    }
    string printValue()
    {
        cout << carName << " " << endl;
        cout << carModel << endl;
        cout << carPrice << endl;
    }
};
int main()
{
    Car privateCar;
    privateCar.setValue("xcorolla", "xmd@", 23343);
    privateCar.printValue();
}