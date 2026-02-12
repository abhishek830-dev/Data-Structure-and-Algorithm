#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // GP = ar, ar^2, ar^3 ........ar^n-1   where a = 1st term, r = common ratio

    int a = 2;
    for (int i=1; i<=n; i++) {
        cout << a << endl;
        a *= 2;
    }

}