#include <iostream>

using namespace std;

int main() {
    // Test 3 times
    for (int test = 1; test <= 3; test++) {
        int n = 0;
        cout << "Enter an integer: ";
        cin >> n;

        // Print n stars in one line
        for (int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
