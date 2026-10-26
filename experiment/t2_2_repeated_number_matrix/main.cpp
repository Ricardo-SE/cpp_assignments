#include <iostream>

using namespace std;

int main() {
    // Test 3 times
    for (int test = 1; test <= 3; test++) {
        int n = 0;
        cout << "Enter an integer: ";
        cin >> n;

        // Print n rows, each row has numbers from 1 to n
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
