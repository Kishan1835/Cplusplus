#include <iostream>
using namespace std;

void print_One_to_n(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    print_One_to_n(++i, n);
}

int main()
{
    int m;
    cout << "Enter an number ";
    cin >> m;
    print_One_to_n(1, m);
}