#include <iostream>
using namespace std;

int main()
{
    /*
        int number;
        cout << "Enter Number : " << endl;
        cin >> number;
        if (number % 2 == 0)
        {
            cout << "You entered even number." << endl;
        }
        else
        {
            cout << "You entered old nymber" << endl;
        }
        cout << "thank You."; */

    int a, b, c;
    cout << "Enter three numbers : " << endl;
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Equilqteral triangle." << endl;

    else
    {
        if (a != b && a != c && b != c)
            cout << "Scalene triangle." << endl;
        else
            cout << "Isoscele triangle." << endl;
    }

    cout << "Stop" << endl;

    system("pause>0");
}