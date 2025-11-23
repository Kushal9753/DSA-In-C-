//         5 
//       5 4
//     5 4 3
//   5 4 3 2
// 5 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the number ";
    cin>>n;

    for(i=1; i<= n; i++){

        for(j=1; j<=n-i; j++){
            
                cout<<"  ";
            }
            for(j=n; j>= n-(i-1) ; j--){
              
                cout<<j<<" ";
            }
            cout<<endl;
            
        }
        cout<<endl;
        return 0;
    }
