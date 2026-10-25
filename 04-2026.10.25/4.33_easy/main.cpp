#include <iostream>

using namespace std;

class triangle {
private:
    int a, b, c;

public:
    void set(int q, int w, int e) {
        a = q;
        b = w;
        c = e;
    }

    void get() const {
        // 勾股定理：任意两边的平方和等于第三边的平方
        if ((a * a + b * b == c * c) ||
            (a * a + c * c == b * b) ||
            (b * b + c * c == a * a)) {
            cout << "These sides form a right triangle." << endl;
        } else {
            cout << "These sides do not form a right triangle." << endl;
        }
    }
};

int main() {
    int a{0}, b{0}, c{0};
    triangle t1;

    cout << "Enter three nonzero integers: ";
    cin >> a >> b >> c;

    t1.set(a, b, c);
    t1.get();

    return 0;
}
