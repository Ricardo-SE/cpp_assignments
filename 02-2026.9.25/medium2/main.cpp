#include <iostream>
using namespace std;
int main() {
    int wp,hg;
    cout<<"input your weight in pounds and your heights in inches"<<endl;
    cin>>wp>>hg;
    int bmi =0;
    bmi=(wp*703)/(hg*hg);
    cout<<bmi<<endl;
    cout << "BMI VALUES"<<endl;
    cout << "Underweight\tless than 18.5\n";
    cout << "Normal\t\tbetween 18.5 and 24.9\n";
    cout << "Overweight\tbetween 25 and 29.9\n";
    cout << "Obese\t\t30 or greater\n";
}