#include <iostream>
#include<algorithm>   //simplify the if else
using namespace std;
int main() {
    cout<<"input three different numbers";
    int a,b,c;
    //if (a>b){
      //  if (a>c){
    cin>>a>>b>>c;
    int s = min({a, b, c});
    int l =max({a,b,c});
    cout<<"sum is "<<a+b+c<<endl;
    cout<<"average is "<<(a+b+c)/3<<endl;
    cout<<"product is "<<a*b*c<<endl;
    cout<<"smallest is "<<s<<endl;
    cout<<"largest is "<<l<<endl;
}