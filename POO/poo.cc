#include <iostream>
using namespace std;
class Car
{
    string Name;
    string Color;
    double Price;

public:
    Car(string name, string color, double price)
    {
        Name = name;
        Color = color;
        Price = price;
    }
    void getInfo()
    {
        cout << "Name : " << Name << endl;
        cout << "Color : " << Color << endl;
        cout << "Price : " << Price << endl;
    }
};

int main(int argc, const char **argv)
{

    Car myCar("Ford", "blue", 50000);
    myCar.getInfo();

    return 0;
}