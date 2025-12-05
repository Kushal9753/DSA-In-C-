// #include <iostream>
// using namespace std;

// bool arms(int n)
// {
//     int x = n, ans, rem, temp, count = 0, ans2 = 0;

//     while (x)
//     {
//         x /= 10;
//         count++;
//     }

//     temp = n;

//     while (temp)
//     {
//         rem = temp % 10;
//         temp /= 10;

//         int ans = 1;
//         for (int i = 0; i < count; i++)
//         {
//             ans = ans * rem;
//         }
//         ans2 = ans2 + ans;
//     }
//     return ans2 == n;
// }

// int main()
// {

//     int a;
//     cout << "Enter the number ";
//     cin >> a;

//     cout << arms(a);

//     return 0;
// }


// solution 2



#include <iostream>
#include<math.h>
using namespace std;

bool arms(int n, int count)
{
    int x = n, ans=0, rem;

    while (x)
    {
        rem = x % 10;
        x /= 10;
        ans = ans + round(pow(rem,count));

    }

    return ans == n;
    
   
}

int digitCount(int n)
{
    int count=0;
    
    while (n)
    {
        n /= 10;
        count++;
    }   

    return count;
}

int main()
{

    int a,digit;
    cout << "Enter the number ";
    cin >> a;

    digit = digitCount(a);
    cout<<arms(a, digit);

    return 0;
}
