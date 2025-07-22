#include <iostream>
using namespace std;

int rightpattern(int value)
{
    for (int i = 0; i < value; i++)
    {
        for (int j = 0; j <= i; j++)
        // when i=0 j runs i=0,j=0 and sp on i=1 j=0 to j=1
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int value;
    cin >> value;
    rightpattern(value);
}