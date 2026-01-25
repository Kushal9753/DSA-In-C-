#include<iostream>
using namespace std;
int main(){
    int n,x,arr[1000];
    cout<<"Enter the size of array:- ";
    cin>>n;
    cout<<"Enter the element in array:- ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"enter the number to be search:- ";
    cin>>x;

    int start,end,mid;
    start = 0;
    end = n-1;
    bool found = false;
    while (start<=end)
    {
 
    mid = (start+end)/2;

    if(arr[mid]==x){
        cout<<"Element at:- "<<mid;
        found = true;
        break;
    }
    else if(x>arr[mid]){
        start = mid +1;
    }
    else{
        end = mid-1;
    }
}

  if(!found){
        cout << "Element not found";
    }




}