// Fig. 5.9: GradeBook.h
// Definition of class GradeBook that counts A, B, C, D and F grades
// and calculates the grade-point average.
#include <string>

using namespace std;

// GradeBook class definition
class GradeBook
{
public:
   GradeBook( string ); // constructor initializes course name
   void setCourseName( string ); // set course name
   string getCourseName() const; // retrieve course name
   void displayMessage() const; // display welcome message
   void inputGrades(); // input arbitrary number of grades from user
   void displayGradeReport() const; // display a report based on the grades
   double calculateGPA() const; // calculate grade-point average
private:
   string courseName; // course name for this GradeBook
   int aCount; // count of A grades
   int bCount; // count of B grades
   int cCount; // count of C grades
   int dCount; // count of D grades
   int fCount; // count of F grades
}; // end class GradeBook
