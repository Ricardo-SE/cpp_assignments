// Exercise 6.41: Recursive Greatest Common Divisor
// Finds the greatest common divisor (GCD) of two integers recursively.
#include <iostream>
using namespace std;

// Recursive function to return the greatest common divisor of x and y
int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

int main() {
    int x = 0;
    int y = 0;

    cout << "Enter two integers (the first should be larger than the second): ";
    if (cin >> x >> y) {
        // Graceful exit check if the first integer is smaller than the second
        if (x < y) {
            cout << "Error: The first integer must be larger than or equal to the second integer." << endl;
            return 1;
        }

        cout << "Greatest common divisor: " << gcd(x, y) << endl;
    }

    return 0;
}
