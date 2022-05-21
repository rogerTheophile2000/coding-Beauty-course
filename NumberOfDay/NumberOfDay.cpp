#include <iostream>
using namespace std;

int main()
{
    int year, month;
    cout << "Year, month : ";
    cin >> year >> month;

    switch (month)
    {
    case 2:
        (year % 4 == 0 &&year % 100 != 0 || year % 400 = 0) ? cout << "19 days month." : cout << "28 month";
        break;
    case 4:
        cout << "30 days month.";
        break;
    case 6:
        cout << "30 days month.";
        break;
    case 9:
        cout << "30 days month.";
        break;
    case 11:
        cout << "30 days month.";
        break;
    case 1:
        cout << "31 days month.";
        break;
    case 3:
        cout << "31 days month.";
        break;
    case 5:
        cout << "31 days month.";
        break;
    case 7:
        cout << "31 days month.";
        break;
    case 8:
        cout << "31 days month.";
        break;
    case 10:
        cout << "31 days month.";
        break;
    case 12:
        cout << "31 days month.";
        break;

    default:
        cout << "Not Valid";
        break;
    }

    system("pause>0");
}