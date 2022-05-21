#include <iostream>
using namespace std;

int msin()
{
    float num1, num2;
    char operation;
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '+':
        cout << num1 << operation << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << operation << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << operation << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 = 0)
            cout << "impossible operation.";
        else
            cout << num1 << operation << num2 << " = " << num1 / num2 << endl;
        break;

    case '%':
        bool isNumInt, isNum2Int;
        isNumInt = ((int)num1 == num1);
        isNum2Int = ((int)num2 == num2);
        if (isNumInt && isNum2Int)
            cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2 << endl;
        else
            cout << "Not valid !";
        break;

    default:
        cout << "Not valid operation !" << endl;
        break;
    }

    system("pause>0");
}