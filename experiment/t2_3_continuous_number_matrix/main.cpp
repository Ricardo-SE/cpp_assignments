#include<iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"input an intenger"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i*n+1;j<=(i+1)*n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
