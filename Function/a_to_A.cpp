#include<iostream>
using namespace std;

char convert(char name)
{
  name = name - 'a' + 'A';
}


int main(){
    char name;

    cout<<"Enter a charactor ";
    cin>>name;
  
    cout<<convert(name);
    
    return 0;

}