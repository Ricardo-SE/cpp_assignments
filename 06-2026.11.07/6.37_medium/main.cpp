// Exercise 6.37: Fibonacci Series
#include <iostream>
using namespace std;

// Nonrecursive Fibonacci using int
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int n1 = 0;
    int n2 = 1;
    int current = 0;
    for (int loop = 2; loop <= n; loop++) {
        current = n1 + n2;
        n1 = n2;
        n2 = current;
    }
    return current;
}

// Nonrecursive Fibonacci using double
double fibonacci_double(int n) {
    if (n <= 1) {
        return n;
    }
    double n1 = 0;
    double n2 = 1;
    double current = 0;
    for (int loop = 2; loop <= n; loop++) {
        current = n1 + n2;
        n1 = n2;
        n2 = current;
    }
    return current;
}

int main() {
    int loop = 0;
    while (true) {
        cout << fibonacci(loop) << endl;
        loop++;
        if (fibonacci(loop) < 0) {
            cout << "int overflowed at term " << loop 
                 << "! Largest int is term " << loop - 1 << endl;
            break;
        }
    }

    int d_loop = 0;
    while (true) {
        double val = fibonacci_double(d_loop);
        cout << val << endl;
        d_loop++;

        // double overflow condition: when it reaches infinity, val == val * 2
        if (fibonacci_double(d_loop) == fibonacci_double(d_loop) * 2 && fibonacci_double(d_loop) > 0) {
            cout << "double overflowed at term " << d_loop 
                 << "! Largest double is term " << d_loop - 1 << " = " 
                 << fibonacci_double(d_loop - 1) << endl;
            break;
        }
    }

    return 0;
}
