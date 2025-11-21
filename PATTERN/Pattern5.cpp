//  1 4 9 16 25
//  1 4 9 16 25
//  1 4 9 16 25
//  1 4 9 16 25
//  1 4 9 16 25


#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter a number ";
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<" "<<j*j;
        }
        cout<<endl;
    }
    return 0;
}