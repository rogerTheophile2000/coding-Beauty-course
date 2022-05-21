#include <iostream>
using namespace std;

bool isPrimeNumber(int number)
{
    // bool isPrimeFlag = true;
    // for (int i = 2; i < number; i++)
    // {
    //     if (number % i == 0)
    //     {
    //         isPrimeFlag = false;
    //         break;
    //     }
    // }
    // return isPrimeFlag;
    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
        return true;
    }
}

main()
{
    /*
    int number;
    cout << "Number : ";
    cin >> number;

    bool isPrimeFlag = isPrimeNumber(number);

    if (isPrimeFlag)
    {
        //     cout << "Prime number" << endl;
    }
    else
    {
        cout << "Not prime number" << endl;
    }
    */
    for (int i = 1; i <= 1000; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
        {
            cout << i << " Is prime number" << endl;
        }
        else
        {
            cout << i << " Not prime number" << endl;
        }
    }

    system("pause>0");
}
