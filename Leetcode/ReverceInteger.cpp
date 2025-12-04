#include<iostream>
using namespace std;
int main(){
        
    int n,i,rem,ans=0;
    cout<<"Enter the number :- ";
    cin>>n;

    i=1;

    while (n)
    {

        rem = n%10;
        n = n/10;
        ans = ans*10 + rem;
        i++;
    }

    cout<<ans;
    
   
    return 0;
}