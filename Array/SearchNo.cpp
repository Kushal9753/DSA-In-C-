#include<iostream>
using namespace std;

int main(){
    int x;
    
cout<<"enter the number in array ";
    
    int a[5];

    for(int i=0; i<5; i++){
        cin>>a[i];
    }

    cout<<"enter the no. to be search ";
        cin >> x;

    bool found = false;
    for(int i=0; i<5; i++){
        if(a[i] == x){
            cout<<"Element found at index "<<i;
            found = true;
            break;
        }
    }

    
    if(!found){
        cout << "Element not found";
    }

    return 0;
}