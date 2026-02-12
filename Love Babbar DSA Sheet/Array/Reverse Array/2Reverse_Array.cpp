// Reverse the given Array using 2 - pointers approach
// Time Complexity : O(N)
// Space Complexity : O(1)

#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int n = arr.size();

    int left = 0, right = n-1;

    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
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