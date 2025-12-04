#include<iostream>
using namespace std;

bool prime(int n){
    if(n<2)
    return 0;
    else{
        for(int i=2; i<=n; i++){
            if(n%2 == 0 )
            return 0;
        }
        return 1;
    }
}

int sum(int a, int b){
    
    return a+b;
}

int fact(int m){
    int ans=1;
    if(m == 1)
    return 1;
    else{
        for(int i=2; i<=m; i++){
             ans = ans * i;
        }
        return ans;
    }
}

int main(){

    int x,y;

    cout<<"Enter the number ";
    cin>>x>>y;

    cout<< prime(x)<<endl;

    cout<< sum(x,y)<<endl;

    cout<< fact(x);

    return 0;

}