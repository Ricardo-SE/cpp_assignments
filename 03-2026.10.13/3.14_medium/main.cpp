#include <iostream>
#include <string>

using namespace std;

// 3.14 Employee Class
class Employee {
private:
    string firstName;
    string lastName;
    int monthlySalary;

public:
    // Constructor: initialize the three data members
    Employee(string first, string last, int salary) {
        setFirstName(first);
        setLastName(last);
        setMonthlySalary(salary); // reuse validation logic
    }

    // Set and get for first name
    void setFirstName(string first) {
        firstName = first;
    }

    string getFirstName() const {
        return firstName;
    }

    // Set and get for last name
    void setLastName(string last) {
        lastName = last;
    }

    string getLastName() const {
        return lastName;
    }

    // Set monthly salary (if not positive, set to 0)
    void setMonthlySalary(int salary) {
        if (salary > 0) {
            monthlySalary = salary;
        } else {
            monthlySalary = 0;
        }
    }

    int getMonthlySalary() const {
        return monthlySalary;
    }
};

int main() {
    // Create two Employee objects
    Employee emp1("Tom", "Cat", 3000);
    Employee emp2("Jerry", "Mouse", 3500);

    // Display each employee's initial yearly salary
    cout << "Initial Yearly Salaries:" << endl;
    cout << emp1.getFirstName() << " " << emp1.getLastName() 
         << "'s yearly salary: $" << emp1.getMonthlySalary() * 12 << endl;
    cout << emp2.getFirstName() << " " << emp2.getLastName() 
         << "'s yearly salary: $" << emp2.getMonthlySalary() * 12 << endl;

    // Give each employee a 10 percent raise
    emp1.setMonthlySalary(emp1.getMonthlySalary() * 1.1);
    emp2.setMonthlySalary(emp2.getMonthlySalary() * 1.1);

    // Display yearly salaries after 10% raise
    cout << "\nYearly Salaries After 10% Raise:" << endl;
    cout << emp1.getFirstName() << " " << emp1.getLastName() 
         << "'s yearly salary: $" << emp1.getMonthlySalary() * 12 << endl;
    cout << emp2.getFirstName() << " " << emp2.getLastName() 
         << "'s yearly salary: $" << emp2.getMonthlySalary() * 12 << endl;

    // Test invalid monthly salary (negative value test)
    cout << "\nTesting invalid salary handling (-500):" << endl;
    emp2.setMonthlySalary(-500);
    cout << emp2.getFirstName() << "'s monthly salary is now: $" 
         << emp2.getMonthlySalary() << endl;

    return 0;
}
