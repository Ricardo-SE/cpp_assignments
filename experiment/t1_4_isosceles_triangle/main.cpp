#include <iostream>

using namespace std;

int main() {
    // Test 3 times
    for (int test = 1; test <= 3; test++) {
        int n = 0;
        cout << "Enter an integer: ";
        cin >> n;

        // Print spaces, then odd number of stars (2*i + 1)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            for (int k = 0; k < 2 * i + 1; k++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}
