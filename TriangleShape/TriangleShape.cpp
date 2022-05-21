#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Triangle shape
    int lenght;
    cout << "Length : ";
    cin >> lenght;
    char symbol;
    cout << "Symbol : ";
    cin >> symbol;

    // Normal Triangle
    cout << "******* NORMAL TRIANGLE *******"
         << endl
         << endl;

    for (int i = 1; i <= lenght; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }

    // Reverse Triangle
    cout << endl
         << "******* REVERSE TRIANGLE *******"
         << endl
         << endl;

    for (int i = lenght; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }

    system("pause>0");
}