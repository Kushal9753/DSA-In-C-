#include<iostream>
using namespace std;
int main(){
int num=12365;

while (num>9)
{
    int reminder,sum=0;
    
    while (num !=0)
    {
        reminder = num % 10;
        num = num/10;
        sum = sum + reminder;
    }

    num = sum;
    
}
cout<<num;
    return 0;
}