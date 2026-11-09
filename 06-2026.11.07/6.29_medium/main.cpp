// Exercise 6.29: Prime Numbers
// Finds and prints all prime numbers between 2 and 10,000.
#include <iomanip>
#include <iostream>
using namespace std;

// Determine if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    // A number is prime if it has no factors up to sqrt(number)
    for (int divisor = 2; divisor * divisor <= number; ++divisor) {
        if (number % divisor == 0) {
            return false; // Found a factor, not prime
        }
    }

    return true; // No factors found, number is prime
}

int main() {
    int count = 0; // Count of prime numbers found

    cout << "The prime numbers between 2 and 10000 are:\n";

    for (int loop = 2; loop <= 10000; ++loop) {
        if (isPrime(loop)) {
            cout << setw(6) << loop;
            ++count;

            // Display 10 prime numbers per line
            if (count % 10 == 0) {
                cout << '\n';
            }
        }
    }

    cout << "\n\nTotal of " << count << " prime numbers found." << endl;
    return 0;
}

