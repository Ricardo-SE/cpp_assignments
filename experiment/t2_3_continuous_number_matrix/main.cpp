#include <iostream>

using namespace std;

int main() {
    // Test 3 times
    for (int test = 1; test <= 3; test++) {
        int n = 0;
        cout << "Enter an integer: ";
        cin >> n;

        // Print continuous numbers from 1 to n*n
        for (int i = 0; i < n; i++) {
            for (int j = i * n + 1; j <= (i + 1) * n; j++) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
