#include <iostream>
using namespace std;
void hanoi(int n, char a, char b, char c) {
    int count = 0;
    if (n == 0) return;
    hanoi(n - 1, a, c, b);
    count++;
    cout << a << "->" << c << endl;
    hanoi(n - 1, b, a, c);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    hanoi(n, 'S', 'H', 'D');
    cout << count;
}