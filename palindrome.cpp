#include<iostream>
using namespace std;
int main () {
    int num;
    cout << "Enter the num: ";
    cin >> num;

    int original = num;
    int rev = 0;

    while (num > 0) {
        int digit = num % 10;
        rev = rev*10 + digit;
        num = num/10;
    }

    if (original == rev) {
        cout << "Given number is a Palindrome";
    }else {
        cout << "Given number is not a Plaindrome";
    }

}