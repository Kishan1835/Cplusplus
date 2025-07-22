#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    int pal = n;
    int store = 0;
    while (pal != 0)
    {
        int check = pal % 10;
        store = store * 10 + check;
        pal = pal / 10;
    }
    if (store == n)
    {
        cout << "the number is a palindrome" << endl;
    }
    else
    {
        cout << "not a palindrome";
    }
}