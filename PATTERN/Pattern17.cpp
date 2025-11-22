//              * 
//           *  *
//        *  *  *
//     *  *  *  *
//  *  *  *  *  *



// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"enter the number ";
//     cin>>n;

//     for(i=1; i<= n; i++){
//         for(j=1; j<=n; j++){
//             if(j <= n-i){
//                 cout<<"   ";
//             }else{
//                 cout<<" * ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Method 2

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the number ";
    cin>>n;

    for(i=1; i<= n; i++){
        for(j=1; j<=n-i; j++){
            
                cout<<"   ";
            }
            for(j=1; j<=i; j++){
                cout<<" * ";
            }
            cout<<endl;
            
        }
        cout<<endl;
        return 0;
    }
