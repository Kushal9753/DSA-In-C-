#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number to be check:- ";
    cin >> num;

    if (num < 2)
    {
        cout << "number is not prime ";
        return 0;
    }
    else
    {
        for (int i = 3; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "Number is prime";
                return 0;
            }
        }
        cout << "Number is not prime";
        return 0;
    }

    return 0;
}