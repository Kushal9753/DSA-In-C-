#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter year to check:- ";
    cin>>n;

    if(n%400 == 0){
     cout<<"Leap year";
    }else if(n%4==0 && n%100 != 0){
        cout<<"Leap year";
    }else{
        cout<<"Not leap year";
    }
    return 0;
}