// Find the nth term of an AP

#include <iostream>
using namespace std;
int main () {
    int n, a, d;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of d: ";
    cin >> d;

    int term = 0;
    for (int i=0; i<n; i++) {
        term = a + i * d;
    }
    cout << term;

}