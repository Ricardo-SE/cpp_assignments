// Exercise 6.30: Reverse Digits
// Takes an integer and returns the number with its digits reversed.
#include <iostream>
using namespace std;

// Function to reverse the digits of an integer
// Return type is long long to prevent overflow
long long reverseDigits(int num) {
    long long reverse_num = 0;

    while (num != 0) {
        int loop = num % 10;
        reverse_num = reverse_num * 10 + loop;
        num /= 10;
    }

    return reverse_num;
}

int main() {
    int num = 0;
    cout << "Enter an integer: ";
    if (cin >> num) {
        cout << "Reversed: " << reverseDigits(num) << endl;
    }
    return 0;
}
