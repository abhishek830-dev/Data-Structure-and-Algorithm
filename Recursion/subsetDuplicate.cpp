// Find all the subset of the given string with out its duplicates. (in the string like aab, aaab aaabbbb, ....etc)

#include<bits/stdc++.h>
using namespace std;
void storeSubset(string ans, string original, vector<string> &v, bool flag) {
    if (original == "") {
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if (original.length()==1) {
        if (flag==true) storeSubset(ans+ch, original.substr(1), v, true);
        storeSubset(ans, original.substr(1), v, true);
        return;   // taki niche ki 2 condition na chale
    }
    char dh = original[1];
    if (ch==dh) { // duplicate
        if (flag==true) storeSubset(ans+ch, original.substr(1), v, true);
        storeSubset(ans, original.substr(1), v, false);
    }
    else { // no duplicate
        if (flag==true) storeSubset(ans+ch, original.substr(1), v, true);
        storeSubset(ans, original.substr(1), v, true);
    }
}
int main () {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    
    vector<string> v;
    storeSubset("", str, v, true);
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << endl;
    }
}