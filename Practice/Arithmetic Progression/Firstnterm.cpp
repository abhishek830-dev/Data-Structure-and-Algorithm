// Print the n terms of AP given a and d.

// a, a+d, a+2d, a+3d, ........up to n terms.

// Tn = a + (n-1)*d

#include <iostream>
using namespace std;
int main() {
    int n, a, d;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of d: ";
    cin >> d;

    for (int i=0; i<n; i++) {
        int term = a + i * d;
        cout << term << endl;
    }

}