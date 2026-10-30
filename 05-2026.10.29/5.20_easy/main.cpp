#include <iostream>

using namespace std;

// Find all Pythagorean triples with sides no larger than 500.
int main() {
    const int maxSide = 500;
    int count = 0;

    cout << "Side 1\tSide 2\tHypotenuse" << endl;

    for (int side1 = 1; side1 <= maxSide; ++side1) {
        for (int side2 = side1; side2 <= maxSide; ++side2) {
            int sumSquares = side1 * side1 + side2 * side2;

            for (int hypotenuse = side2 + 1; hypotenuse <= maxSide; ++hypotenuse) {
                if (sumSquares == hypotenuse * hypotenuse) {
                    cout << side1 << '\t' << side2 << '\t' << hypotenuse << '\n';
                    ++count;
                    break;
                }
            }
        }
    }

    cout << "\nA total of " << count << " triples found." << endl;

    return 0;
}
