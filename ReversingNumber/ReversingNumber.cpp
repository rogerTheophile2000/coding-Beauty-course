#include <iostream>
using namespace std;

int main()
{
    //  Reversing number
    int number, reverseNumber = 0;
    cout << "Number : ";
    cin >> number;

    while (number != 0)
    {
        reverseNumber *= 10;
        reverseNumber += number % 10;
        number /= 10;
    }

    cout << "Reversed : " << reverseNumber;

    system("pause>0");
}