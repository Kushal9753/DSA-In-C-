#include<iostream>
using namespace std;
int main(){
   
    int arr[5] = {1,2,3,4,6};

    for(int i=0; i<5; i++){
        if(arr[i] != (i+1)){
            cout<<"missing element is "<<(i+1);
            break;
        }
    }

    return 0;
    
}