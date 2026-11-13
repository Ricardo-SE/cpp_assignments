// Exercise 7.36: Print a String Backward
// Recursively prints a string backward starting from a given subscript.
#include <iostream>
#include <string>
using namespace std;

// Recursive function to print string backward
void stringReverse(const string& str, int startingSubscript) {
    // Base case: if we reach the end of the string, stop and return
    if (str[startingSubscript] == '\0') {
        return;
    }

    // Recursive step: process the rest of the string first
    stringReverse(str, startingSubscript + 1);

    // Print the current character after returning from deeper calls
    cout << str[startingSubscript];
}

int main() {
    string text = "HelloWorld";

    cout << "Original string: " << text << endl;
    cout << "Reversed string: ";
    stringReverse(text, 0); // Start from subscript 0
    cout << endl;

    return 0;
}
