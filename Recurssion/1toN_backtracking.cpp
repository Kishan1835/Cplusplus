#include <iostream>
using namespace std;

void One_to_N_backtracking(int i, int n)
{
    if (i < 1)
        return;
    cout << i << endl;
    One_to_N_backtracking(i - 1, n);
}

int main()
{
    int n;
    cout << "Enter the value :";
    cin >> n;
    One_to_N_backtracking(n, n);
}