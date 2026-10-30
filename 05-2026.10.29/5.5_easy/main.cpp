#include <iostream>

using namespace std;

// Sum a sequence of integers specified by the first input value.
int main() {
    int totalCount = 0;
    int sum = 0;

    // Read the number of values to sum
    cin >> totalCount;

    for (int i = 0; i < totalCount; ++i) {
        int value = 0;
        cin >> value;
        sum += value;
    }

    cout << "The sum is " << sum << endl;

    return 0;
}
