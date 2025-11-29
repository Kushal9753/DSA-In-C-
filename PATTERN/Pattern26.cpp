#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the number:- ";
    cin>>n;


    for(i=1; i<=n; i++){
        for(j=1; j<=i-1; j++){
            cout<<"  ";
        }
        for(j=n*2; j>=i*2; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}