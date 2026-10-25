#include <iostream>

using namespace std;

class Palindrome {
private:
    int d1{0}; // Ten-thousands digit
    int d2{0}; // Thousands digit
    int d3{0}; // Hundreds digit
    int d4{0}; // Tens digit
    int d5{0}; // Ones digit

public:
    // Split the 5-digit number into individual digits with validation
    bool set(int number) {
        // Defensive check: ensure the number is a 5-digit integer
        if (number < 10000 || number > 99999) {
            cout << "Error: The input is not a five-digit integer." << endl;
            return false;
        }

        // Extract each digit using division and modulus operators
        d1 = number / 10000;
        d2 = (number / 1000) % 10;
        d3 = (number / 100) % 10;
        d4 = (number / 10) % 10;
        d5 = number % 10;

        return true;
    }

    // Determine and print whether the number is a palindrome
    void check() const {
        if (d1 == d5 && d2 == d4) {
            cout << "The number is a palindrome." << endl;
        } else {
            cout << "The number is not a palindrome." << endl;
        }
    }
};

int main() {
    int number{0};
    Palindrome p;

    cout << "Enter a five-digit integer: ";
    cin >> number;

    // Only perform the palindrome check if the input is valid
    if (p.set(number)) {
        p.check();
    }

    return 0;
}
