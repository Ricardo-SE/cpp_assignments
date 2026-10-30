#include <iostream>

using namespace std;

// Print triangle patterns using nested for loops (both separate and side-by-side).
int main() {
    const int rows = 10;

    // --- Part 1: Separate Patterns (one below the other) ---

    // Pattern (a)
    cout << "(a)" << endl;
    for (int row = 1; row <= rows; ++row) {
        for (int col = 1; col <= row; ++col) {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    // Pattern (b)
    cout << "(b)" << endl;
    for (int row = 1; row <= rows; ++row) {
        for (int col = 1; col <= rows - row + 1; ++col) {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    // Pattern (c)
    cout << "(c)" << endl;
    for (int row = 1; row <= rows; ++row) {
        for (int space = 1; space <= row - 1; ++space) {
            cout << ' ';
        }
        for (int star = 1; star <= rows - row + 1; ++star) {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    // Pattern (d)
    cout << "(d)" << endl;
    for (int row = 1; row <= rows; ++row) {
        for (int space = 1; space <= rows - row; ++space) {
            cout << ' ';
        }
        for (int star = 1; star <= row; ++star) {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    // --- Part 2: Extra Credit (Side by side) ---
    cout << "Extra Credit: Patterns Side by Side" << endl;
    cout << "(a)\t\t(b)\t\t(c)\t\t(d)" << endl;

    for (int row = 1; row <= rows; ++row) {
        // Pattern (a): stars then padding spaces
        for (int star = 1; star <= row; ++star) {
            cout << '*';
        }
        for (int space = 1; space <= rows - row; ++space) {
            cout << ' ';
        }
        cout << "\t";

        // Pattern (b): stars then padding spaces
        for (int star = 1; star <= rows - row + 1; ++star) {
            cout << '*';
        }
        for (int space = 1; space <= row - 1; ++space) {
            cout << ' ';
        }
        cout << "\t";

        // Pattern (c): leading spaces then stars
        for (int space = 1; space <= row - 1; ++space) {
            cout << ' ';
        }
        for (int star = 1; star <= rows - row + 1; ++star) {
            cout << '*';
        }
        cout << "\t";

        // Pattern (d): leading spaces then stars
        for (int space = 1; space <= rows - row; ++space) {
            cout << ' ';
        }
        for (int star = 1; star <= row; ++star) {
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}
