#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int i = 1;
    int j = 0;
    double a = 0.0;
    double b = 0.0;

    cout << setprecision(2);

    // Print values of i
    for (i = 1; i <= 2; i++) {
        cout << "i is now equal to " << i << endl;
    }

    // Print calculations and skip division when j is 0
    for (j = 0; j <= 3; j++) {
        cout << "\tj is now equal to " << j << endl;

        cout << "\t\ti + j = " << i + j << "\ti - j = " << i - j << endl;
        cout << "\t\ti * j = " << i * j << "\ti ^ j = " << pow(i, j) << endl;

        if (j == 0) {
            continue;
        } else {
            a = i;
            b = j;
            cout << "\t\ti / j = " << a / b << "\ti % j = " << (i % j) << endl;
        }
    }

    cout << "\nThe final values of i and j are: " << i << " and " << j << endl;

    return 0;
}
