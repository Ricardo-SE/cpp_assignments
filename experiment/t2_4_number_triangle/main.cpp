#include <iostream>

using namespace std;

int main() {
    // Test 3 times
    for (int test = 1; test <= 3; test++) {
        int n = 0;
        cout << "Enter an integer: ";
        cin >> n;

        // Print continuous numbers in triangle rows
        int count = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << count++ << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
