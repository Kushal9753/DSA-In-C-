// a 
// b b
// c c c
// d d d d
// e e e e e


#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter a number ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        char name = 'a' + (i - 1);
        for (j = 1; j <= i; j++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}