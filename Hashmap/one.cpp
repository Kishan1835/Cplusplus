#include <iostream>
using namespace std;

int searchArr(int number, int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            count = count + 1;
        }
    }
    return count;
}

int main()
{
    int number;
    cout << "Enter the number u want to search: ";
    cin >> number;
    int arr[] = {2, 4, 6, 3, 2, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << searchArr(number, arr, arr_size) << endl;
}