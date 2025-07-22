#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int numberToCount;
    cout << "enter the number to count" << endl;
    cin >> numberToCount;
    while (numberToCount != 0)
    {
        int result = numberToCount % 10;
        numberToCount = numberToCount / 10;
        count++;
    }
    cout << "the digits in the given number = " << count << endl;
}