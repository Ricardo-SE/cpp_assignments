// Fig. 5.10: GradeBook.cpp
// Member-function definitions for class GradeBook that
// uses a switch statement to count A, B, C, D and F grades
// and calculates the grade-point average.
#include <iostream>
#include <iomanip>
#include "GradeBook.h"

using namespace std;

// constructor initializes courseName and counter data members to 0
GradeBook::GradeBook( string name )
{
   setCourseName( name );
   aCount = 0;
   bCount = 0;
   cCount = 0;
   dCount = 0;
   fCount = 0;
} // end GradeBook constructor

// set course name; limit name to 25 or fewer characters
void GradeBook::setCourseName( string name )
{
   if ( name.length() <= 25 )
      courseName = name;
   else
   {
      courseName = name.substr( 0, 25 );
      cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
         << "Limiting courseName to first 25 characters.\n" << endl;
   }
} // end function setCourseName

// retrieve course name
string GradeBook::getCourseName() const
{
   return courseName;
} // end function getCourseName

// display welcome message
void GradeBook::displayMessage() const
{
   cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" 
      << endl;
} // end function displayMessage

// input arbitrary number of grades from user; update grade counter
void GradeBook::inputGrades()
{
   int grade;

   cout << "Enter the letter grades." << endl
      << "Enter the EOF character to end input." << endl;

   while ( ( grade = cin.get() ) != EOF )
   {
      switch ( grade )
      {
         case 'A':
         case 'a':
            ++aCount;
            break;

         case 'B':
         case 'b':
            ++bCount;
            break;

         case 'C':
         case 'c':
            ++cCount;
            break;

         case 'D':
         case 'd':
            ++dCount;
            break;

         case 'F':
         case 'f':
            ++fCount;
            break;

         case '\n':
         case '\t':
         case ' ':
            break;

         default:
            cout << "Incorrect letter grade entered."
               << " Enter a new grade." << endl;
            break;
      } // end switch
   } // end while
} // end function inputGrades

// calculate grade-point average
double GradeBook::calculateGPA() const
{
   int totalGrades = aCount + bCount + cCount + dCount + fCount;

   if ( totalGrades == 0 )
      return 0.0;

   int totalPoints = 4 * aCount + 3 * bCount + 2 * cCount + 1 * dCount;
   return static_cast< double >( totalPoints ) / totalGrades;
} // end function calculateGPA

// display report based on grades entered by user
void GradeBook::displayGradeReport() const
{
   int totalGrades = aCount + bCount + cCount + dCount + fCount;

   cout << "\n\nNumber of students who received each letter grade:"
      << "\nA: " << aCount
      << "\nB: " << bCount
      << "\nC: " << cCount
      << "\nD: " << dCount
      << "\nF: " << fCount
      << endl;

   if ( totalGrades != 0 )
   {
      cout << "The class grade-point average is: " 
         << fixed << setprecision( 2 ) << calculateGPA() << endl;
   }
   else
   {
      cout << "No grades were entered." << endl;
   }
} // end function displayGradeReport
