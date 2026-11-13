#include<iostream>
using namespace std;
bool validate_1(int val){
    if(val>=10&&val<=100)
        return true;
    return false;
}
int count=0;
int arr[20]={};
bool validate_2(int val){
    for(int i=0;i<count;i++){
        if(arr[i]==val)
            return false;
    }
    return true;
}
void print_array(){
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int testData[20] = {10, 20, 20, 50, 10, 99, 100, 10, 25, 30,
                        40, 50, 60, 70, 80, 80, 90, 95, 999, 20};
    for (int i = 0; i < 20; i++) {
        int val = testData[i];
        if (validate_1(val) && validate_2(val)) {
            arr[count] = val;
            count++;
        }
        cout << "test" << endl;
        print_array();
    }
    for(int i=0;i<20;i++){
    cout<<"input a number"<<endl;
    int val =0;
   cin>>val;
   if(validate_1(val)&&validate_2(val)){
    arr[count]=val;
    count++;
   }
    print_array();
    
}
}
