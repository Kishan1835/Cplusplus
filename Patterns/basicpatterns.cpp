#include <iostream>
using namespace std;

int inverted(int rangeNumber)
{
    for (int i = 0; i < rangeNumber; i++)
    {
        for (int j = 0; j < rangeNumber ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int value;
    cout << "enter the value: " << endl;
    cin >> value;
    inverted(value);
}