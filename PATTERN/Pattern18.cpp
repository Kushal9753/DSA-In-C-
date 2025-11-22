//         1 
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5




// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"enter the number ";
//     cin>>n;

//     for(i=1; i<= n; i++){
//         for(j=1; j<=n-i; j++){
            
//                 cout<<"  ";
//             }
//             for(j=1; j<=i; j++){
//                 cout<<i<<" ";
//             }
//             cout<<endl;
            
//         }
//         cout<<endl;
//         return 0;
//     }



// Method 2
    
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the number ";
    cin>>n;

    for(i=1; i<= n; i++){
        for(j=1; j<=n; j++){
            if(j <= n-i){
                cout<<"  ";
            }else{
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
