#include <iostream>

using namespace std;

int main() {
    // Test 3 times
    for (int test = 1; test <= 3; test++) {
        int n = 0;
        cout << "Enter an integer: ";
        cin >> n;

        // Print n*n shifted numbers using modulo
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << (i + j) % n + 1 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
