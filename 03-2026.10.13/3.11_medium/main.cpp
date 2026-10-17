#include <iostream>
#include "GradeBook.h"

using namespace std;

int main() {
    // create a GradeBook object for SCUT cpp class
    GradeBook myGradeBook("SCUT cpp class", "Professor.Liu");

    // display initial information
    cout << "--- Initial State ---" << endl;
    myGradeBook.displayMessage();

    // change instructor to Kevin
    cout << "\nChanging instructor name to Kevin...\n" << endl;
    myGradeBook.setInstructorName("Kevin");

    // display updated information
    cout << "--- After Update ---" << endl;
    myGradeBook.displayMessage();

    return 0;
}
