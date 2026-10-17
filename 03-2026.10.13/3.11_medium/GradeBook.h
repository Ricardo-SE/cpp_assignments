#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>

// GradeBook class definition
class GradeBook {
public:
    // constructor with course name and instructor name
    GradeBook(std::string name, std::string instructor);

    // course name functions
    void setCourseName(std::string name);
    std::string getCourseName() const;

    // instructor name functions
    void setInstructorName(std::string instructor);
    std::string getInstructorName() const;

    // display welcome message and instructor
    void displayMessage() const;

private:
    std::string courseName;     // course name
    std::string instructorName; // instructor name
};

#endif
