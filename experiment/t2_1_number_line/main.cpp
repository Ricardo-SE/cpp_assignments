#include <iostream>

using namespace std;

int main() {
    // Test 3 times
    for (int test = 1; test <= 3; test++) {
        int n = 0;
        cout << "Enter an integer: ";
        cin >> n;

        // Print numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
