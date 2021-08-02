#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dig(ll a)
{
    ll count = 0;
    while (a > 0)
    {
        a /= 10;
        count++;
    }
    return count;
}

void required_number(ll num, ll n, ll d)
{
    ll i, j, power, a, flag = 0;
    for (i = num; i >= 1; i--)
    {
        power = pow(10, i);
        a = n % power;

        // if difference between power and n doesn't exceed d
        if (d > a)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        ll t = 0;

        // loop to build a number from the appropriate no of digits containing only 9
        for (j = 0; j < i; j++)
        {
            t += 9 * pow(10, j);
        }

        // if the build number is  same as original number(n)
        if (n % power == t)
            cout << n;
        else
        {

            // trick
            cout << n - (n % power) - 1;
        }
    }
    else
        cout << n;
}

int main()
{
    ll n, d;
    cin >> n >> d;

    // variable that stores no of digits in n
    ll num = dig(n);
    required_number(num, n, d);
    return 0;
}
