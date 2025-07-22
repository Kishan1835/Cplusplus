#include <iostream>
using namespace std;

int invertedTriangleNum(int value)
{
    for (int i = 1; i <= value; i++)
    {
        for (int j = 1; j <=value - i + 1; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    invertedTriangleNum(n);
}