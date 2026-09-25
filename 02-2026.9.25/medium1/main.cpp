#include <iostream>
using namespace std;
int main() {
    int num =0;
    cin>>num;
    int a,b,c,d,e;
    a=num/10000;
    b=(num%10000)/1000;
    c=(num%1000)/100;
    d=(num%100)/10;
    e=num%10;
    cout<<a<<"   "<<b<<"   "<<c<<"   "<<d<<"   "<<e;
}