#include<iostream>
using namespace std;
int main(){
   

    int arr[5]={11,12,13,14,15};
    int temp = arr[4];

    for(int i=4; i>=1; i--){
        arr[i]=arr[i-1];
    }

    arr[0]=temp;

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
    
}