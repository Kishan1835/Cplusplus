#include <bits/stdc++.h>
using namespace std;
// The map stores all the values in the sorted way
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // re-compute
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
 

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << "numbers present in the array: " << mpp[number] << endl;
    }
    return 0;
}
