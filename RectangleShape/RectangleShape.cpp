#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // Rectangle shape
    int height, width;
    cout << "Height : ";
    cin >> height;
    cout << "Width : ";
    cin >> width;
    char symlbol;
    cout << "Symbol : ";
    cin >> symlbol;

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            cout << setw(3) << symlbol;
        }
        cout << endl;
    }

    system("pause>0");
}