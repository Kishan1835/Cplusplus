#include <bits/stdc++.h>
using namespace std;
// we will use the ASCII values in tehis question as
int main()
{
    string s;
    cin >> s;

    int hash_char[256] = {0};
    for (int i = 0; i < s.size(); i++)
    { // this works for lowercase letter as the letters starts from 97
        hash_char[s[i] - 'a']++;
        // all letters lowercase or uppercase
        hash_char[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // this works for lowercase letter as the letters starts from 97
        cout << "times it appeared: " << hash_char[c - 'a'] << endl;
        // all alphabets lowercase or uppercase
        cout << "times it appeared: " << hash_char[c -] << endl;
    }

    return 0;
}
