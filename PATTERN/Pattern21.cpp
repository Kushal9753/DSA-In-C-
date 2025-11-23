//         a 
//       a b 
//     a b c 
//   a b c d 
// a b c d e 



#include<iostream>
using namespace std;
int main(){
    int i,n;
    char j;
    cout<<"enter the number ";
    cin>>n;

    for(i=1; i<= n; i++){

        for(j=1; j<=n-i; j++){
            
                cout<<"  ";
            }
            for(j='a'; j<='a'+i-1; j++){
              
                cout<<j<<" ";
            }
            cout<<endl;
            
        }
        cout<<endl;
        return 0;
    }


