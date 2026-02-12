// Reverse the given Array using an temporary array
// Time Complexity : O(N)
// Space Complexity : O(N)

#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int n = arr.size();

    vector<int> temp(n);

    for (int i=0; i<n; i++) {
        temp[i] = arr[n-i-1];    // temp[0] = arr[6-0-1]
    }

    for (int i=0; i<n; i++) {
        arr[i] = temp[i];
    }

}

int main() {

    int n;     // n=6
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> arr(n);   // {1, 4, 3, 2, 5, 6}
    cout << "Enter the elements in the array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr);    // {6, 5, 2, 3, 4, 1}
    cout << "Reversed Array: ";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

}