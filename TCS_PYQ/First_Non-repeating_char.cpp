// First Non-Repeating Character.
// Given a string, find the first character that does not repeat. If none exists, print -1.

// Here we use map - to check the character & its frequency in the string

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    map<char, int> mp;
    // frequency count
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    // putting of chars in map is done
    for (int i = 0; i < s.length(); i++)
    {
        if (mp[s[i]] == 1)
        {
            cout << s[i];
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}