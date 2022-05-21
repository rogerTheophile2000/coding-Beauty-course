#include <iostream>
using namespace std;

int main()
{
    // Factorial of number

    int number;
    cout << "Number :";
    cin >> number;
    int factorial = 1;

    // Method 1
    // for (int i = 1; i <= number; i++)
    // {
    //     factorial *= i;
    // }
    // Method 2

    for (int i = number; i >= 1; i--)
    {
        factorial *= i;
    }

    cout << "The factorial of : " << number << " is " << factorial << endl;

    system("pause>0");
}