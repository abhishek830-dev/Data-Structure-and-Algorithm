#include <iostream>
using namespace std;
int main () {
    int n, a, d;
    cout << " Enter the value of n, a, d: ";
    cin >> n >> a >> d;

    int term = 0;
    for (int i=0; i<n; i++) {
        term = a + i * d;
    }
    cout << "The answer is : " << term << endl; 

}