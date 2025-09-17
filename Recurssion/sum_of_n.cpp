// parameterized way

#include <iostream>
using namespace std;

// void sumofN(int i, int sum)
// {
//     if (i < 1)
//     {
//         cout << "the sum fo N nos: " << sum << endl;
//         return;
//     }
//     sumofN(i - 1, sum + i);
// }

// int main()
// {
//     int n;
//     cout << "The value of n:";
//     cin >> n;
//     sumofN(n, 0);
// }

// // Funtional way

// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     };
//     return n + sum(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "enter value of n :";
//     cin >> n;
//     cout << sum(n) << endl;
// }

// // factorial on n numbers
int fact(int i)
{
    if (i == 1)
    {
        return 1;
    };
    return i * fact(i - 1);
}

int main()
{
    int n;
    cout << "enter value of n :";
    cin >> n;
    cout << fact(n) << endl;
}

// parameterized way of factorial

// void facto(int i, int factnum)
// {
//     if (i < 1)
//     {
//         cout << "the fact  fo N nos: " << factnum << endl;
//         return;
//     };
//     facto(i - 1, factnum * i);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     facto(n, 1);
// }
