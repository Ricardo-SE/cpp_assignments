#include <iostream>
#include <iomanip>

using namespace std;

// Salesperson class encapsulates the salary calculation logic
class Salesperson {
private:
    static constexpr double base_salary = 200.00; // Base weekly salary
    static constexpr double commission_rate = 0.09; // 9% commission rate

public:
    // Calculate total earnings based on gross sales
    double calculator(double grosssales) const {
        double sum = base_salary + commission_rate * grosssales;
        return sum;
    }
};

int main() {
    double sales{0.0};
    Salesperson person;

    // Format output with two decimal places
    cout << fixed << setprecision(2);

    // Priming read: input first salesperson's sales
    cout << "Enter sales in dollars (-1 to end): ";
    cin >> sales;

    // Sentinel-controlled loop
    while (sales != -1) {
        // Calculate and display earnings
        cout << "Salary is: $" << person.calculator(sales) << endl;

        // Prompt for the next salesperson
        cout << "\nEnter sales in dollars (-1 to end): ";
        cin >> sales;
    }

    return 0;
}
