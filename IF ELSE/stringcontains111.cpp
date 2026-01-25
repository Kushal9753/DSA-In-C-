#include <iostream>
using namespace std;

int main()
{

    int num,count=0,found=false;
    cout << "Enter the number to be check:- ";
    cin >> num;

   while (num>0)
   {
    int rem = num%10;
    num = num/10;

    if(rem==1){
         count+=1;
        if(count==3){
            found = true;
            break;
        }
    }else{
        count =0;
       
    }
   }
   

   if(found){
    cout<<"string accepted ";
   }else{
    cout<<"string not accepted ";

   }
    return 0;
}