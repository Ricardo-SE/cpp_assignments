#include <iostream>
#include "GradeBook.h"

using namespace std;

// constructor initializes courseName and instructorName
GradeBook::GradeBook(string name, string instructor)
    : courseName(name), instructorName(instructor) {
    // empty body
}

// set course name
void GradeBook::setCourseName(string name) {
    courseName = name;
}

// get course name
string GradeBook::getCourseName() const {
    return courseName;
}

// set instructor name
void GradeBook::setInstructorName(string instructor) {
    instructorName = instructor;
}

// get instructor name
string GradeBook::getInstructorName() const {
    return instructorName;
}

// display welcome message and course information
void GradeBook::displayMessage() const {
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    cout << "This course is presented by: " << getInstructorName() << endl;
}
