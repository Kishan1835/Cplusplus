#include <iostream>
using namespace std;

int invertedTriangle(int value)
{
    for (int i = 1; i <= value; i++)
    {
        for (int j = 0; j < value - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    invertedTriangle(n);
}