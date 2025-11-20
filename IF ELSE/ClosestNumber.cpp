#include<iostream>
using namespace std;

int main(){
    int a, b, X;

    cout<<"Enter the number a:- ";
    cin>>a;


    cout<<"Enter the number b:- ";
    cin>>b;


    cout<<"Enter the number X:- ";
    cin>>X;

    int distanceA, distanceB;

    distanceA = a - X;
    if(distanceA < 0){
        distanceA = -distanceA;
    }

    distanceB = b - X;
    if(distanceB < 0){
        distanceB = -distanceB;
    }
    

    if(distanceA > distanceB){
        cout<<b<<" is close to the "<<X;
        return 0;
    }else{
        cout<<a<<" is close to the "<<X;
        return 0;
    }

    return 0;

}