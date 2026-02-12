// Maximum & Minimum element of an array using using setMini & setMaxi function
// Time Complexity : O(N)
// Space Complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

int setMini(int arr[], int n) {
    int mini = INT_MAX;
    for (int i=0; i<n; i++) {
        if (arr[i] < mini)
        mini = arr[i];
    }
    return mini;
}

int setMaxi(int arr[], int n) {
    int maxi = INT_MIN;
    for (int i=0; i<n; i++) {
        if (arr[i] > maxi)
        maxi = arr[i];
    }
    return maxi;
}

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in the array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum element = " << setMaxi(arr, n) << endl;
    cout << "Minimum element = " << setMini(arr, n) << endl;

}