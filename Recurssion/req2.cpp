// print N times using recurssion
#include <iostream>
using namespace std;

void print_name(int i, int n)
{
    if (i > n)
        return;
    cout << "kishan" << endl;
    print_name(i + 1, n);
}

int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    print_name(1, n);
} 