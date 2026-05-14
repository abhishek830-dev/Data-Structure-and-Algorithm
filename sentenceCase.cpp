#include <bits/stdc++.h>
using namespace std;
string tosentenceCase(string text)
{
    bool capitalizeNext = true; // flag

    for (int i = 0; i < text.length(); i++)
    {
        text[i] = tolower(text[i]);

        if (capitalizeNext && isalpha(text[i]))
        {
            text[i] = toupper(text[i]);
            capitalizeNext = false;
        }

        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            capitalizeNext = true;
        }
    }
    return text;
}

int main()
{
    string input;
    cout << "Enter the text: ";
    getline(cin, input);

    cout << tosentenceCase(input);
    return 0;
}