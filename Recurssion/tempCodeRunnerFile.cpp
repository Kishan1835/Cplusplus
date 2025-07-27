#include <iostream>
using namespace std;

void One_to_N_backtracking(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    One_to_N_backtracking(--i, n);
    cout << i;
}

int main()
{
    int n;
    cout << "Enter the value";
    cin >> n;
}