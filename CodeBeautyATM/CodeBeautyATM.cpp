#include <iostream>
using namespace std;

void showMenu()
{
    cout << "****************MENU****************" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "3. Exit :" << endl;
}
int main()
{
    // check balance
    // deposit money
    // show menu
    int option;
    double balance = 1000;
    do
    {
        showMenu();
        cout << "option : ";
        cin >> option;

        system("cls");

        switch (option)
        {
        case 1:
            cout << "Balance is : " << balance << endl;
            break;
        case 2:
            cout << "Deposit amount : ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:
            cout << "Withdraw amount : ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Not enough money" << endl;

            break;

        default:
            break;
        }
    } while (option != 4);
    {
    }

    system("pause>0");
}