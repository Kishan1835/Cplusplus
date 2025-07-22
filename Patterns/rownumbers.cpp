#include <iostream>
using namespace std;

int rowpatterns(int value)
{
    for (int i = 1; i <= value; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i<<" " ;
        }
        cout << endl;
    }
}

int main()
{
    int value;
    cin >> value;
    rowpatterns(value);
}