#include <iostream>
using namespace std;

// 3.15 Date Class
class Date {
private:
    int month;
    int day;
    int year;

public:
    // Constructor: initialize data members
    Date(int m, int d, int y) {
        setMonth(m);
        setDay(d);
        setYear(y);
    }

    // Set month(legal)
    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            month = 1; 
        }
    }

    int getMonth() {
        return month;
    }

    // Set and get for day
    void setDay(int d) {
        day = d;
    }

    int getDay() {
        return day;
    }

    // Set and get for year
    void setYear(int y) {
        year = y;
    }

    int getYear() {
        return year;
    }

    // Display
    void displayDate() {
        cout << month << "/" << day << "/" << year << endl;
    }
};

int main() {
    // Test 1: normal valid date
    Date date1(10, 13, 2026);
    cout << "Date 1: ";
    date1.displayDate();

    // Test 2: invalid month (should default to 1)
    Date date2(15, 5, 2024);
    cout << "Date 2 (test invalid month 15): ";
    date2.displayDate();

    // Test 3: modify month using set function
    date2.setMonth(8);
    cout << "Date 2 after setMonth(8): ";
    date2.displayDate();

    return 0;
}