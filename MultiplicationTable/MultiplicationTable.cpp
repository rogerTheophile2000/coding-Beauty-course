#include <iostream>
using namespace std;

int main()
{

    // Multpilication table
    int number = 0;
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    system("pause>0");
}