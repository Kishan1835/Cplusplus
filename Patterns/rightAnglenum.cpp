#include <iostream>
using namespace std;

int rightpatternNum(int value)
{
    for (int i = 1; i <= value; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int value;
    cin >> value;
    rightpatternNum(value);
}