#include <iostream>
using namespace std;

int main()
{
    int hostUserNumber, guestUserNumber;
    cout << "Host : ";
    cin >> hostUserNumber;
    system("cls");
    cout << "Guest : ";
    cin >> guestUserNumber;

    (hostUserNumber == guestUserNumber) ? cout << "correct" : cout << "Failed";

    // if (hostUserNumber == guestUserNumber)
    //     cout << "correct";
    // else
    //     cout << "Failed";

    system("pause>0");
}