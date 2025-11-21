// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 


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