// Fig. 5.11: fig05_11.cpp
// Create GradeBook object, input grades and display grade report.
#include "GradeBook.h" // include definition of class GradeBook

int main()
{
   // create GradeBook object
   GradeBook myGradeBook( "CS101 C++ Programming" );

   myGradeBook.displayMessage(); // display welcome message
   myGradeBook.inputGrades(); // read grades from user
   myGradeBook.displayGradeReport(); // display report based on grades
} // end main
