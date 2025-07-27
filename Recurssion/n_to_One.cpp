#include <iostream>
using namespace std;

void print_n_to_One(int i, int n)
{
    if (i < 1)
        return;
    cout << i << endl;
    print_n_to_One(--i, n);
}

int main()
{
    int m;
    cout << "Enter an number ";
    cin >> m;
    print_n_to_One(m, m);
}