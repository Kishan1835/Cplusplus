#include <iostream>
using namespace std;

void f()
{
    cout << 1;
    if (1)
    {
        f();
    }
}
int main()
{
    f();
}