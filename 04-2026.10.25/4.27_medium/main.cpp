#include <iostream>

using namespace std;

class Number {
private:
    int binaryNumber{0};  // Store the original binary representation
    int decimalNumber{0}; // Store the converted decimal value

public:
    // Convert the binary integer to decimal and store both values
    void set(int binary) {
        binaryNumber = binary;
        decimalNumber = 0;

        int temp = binary; // Temporary variable to peel off digits
        int weight = 1;    // Positional value starts at 2^0 = 1

        // Loop until all digits are processed
        while (temp != 0) {
            int digit = temp % 10;           // Extract the rightmost digit
            decimalNumber += digit * weight; // Add weighted value to decimal total
            weight *= 2;                     // Double the weight for the next position
            temp /= 10;                      // Discard the processed rightmost digit
        }
    }

    // Return the converted decimal number
    int get() const {
        return decimalNumber;
    }
};

int main() {
    int binary{0};
    Number num;

    cout << "Enter a binary number (e.g., 1101): ";
    cin >> binary;

    num.set(binary);
    cout << "The decimal equivalent is: " << num.get() << endl;

    return 0;
}
