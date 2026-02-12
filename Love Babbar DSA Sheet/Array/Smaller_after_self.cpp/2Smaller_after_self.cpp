// Count smaller elements right side using merge sort

#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    vector<int> result = constructLowerArray(arr);
    
    




}