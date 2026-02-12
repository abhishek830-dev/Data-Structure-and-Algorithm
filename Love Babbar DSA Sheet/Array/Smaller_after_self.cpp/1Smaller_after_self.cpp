// Count smaller elements right side after self using Naive Approach

#include<bits/stdc++.h>
using namespace std;

// Function to construct the lower array
vector<int> constructLowerArray(vector<int>& arr) {

    vector<int> countSmaller(arr.size(), 0);
    for (int i=0; i<arr.size(); i++) {
        for (int j=i+1; j<arr.size(); j++) {
            if (arr[j] < arr[i]) {
                countSmaller[i]++;
            }
        }
    }
    return countSmaller;
}

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
    cout << "Count of smaller elements on right side: ";
    for (int i=0; i<n; i++) {
        cout << result[i] << " ";
    }

    return 0;
    
}