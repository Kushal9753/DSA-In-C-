// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j,k=1;
//     cout<<"Enter a number ";
//     cin>>n;

//     for(i=1; i<=n; i++){
        
//         for(j=1; j<=n; j++){
//             cout<<" "<<k;
//             k++;
//         }
//         cout<<endl;
        
//     }
//     return 0;
// }



// Method 2

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter a number ";
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<(i-1)*5+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}