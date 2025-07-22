#include <iostream>
using namespace std;

void trianglePattern(int value)
{
    for (int i = 0; i <value; i++)
    {
        // space
        for (int j = 0; j < value - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < value - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    trianglePattern(n);
}
