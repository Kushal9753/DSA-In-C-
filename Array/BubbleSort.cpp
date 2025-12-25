#include<iostream>
using namespace std;
int main(){
    int n,arr[1000];
    cout<<"Enter the size of array:- ";
    cin>>n;
    cout<<"Enter the element in array:- ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    for(int i=0; i<n-1; i++)
    {
        bool swaped = 0;
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped = 1;
            }
        }
        if(swaped == 0)
        {
            break;
        }
    }

    for(int k=0; k<n; k++)
    {
        cout<<" "<<arr[k];
    }
}