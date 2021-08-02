#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sum(ll x)
{
    int ans = 0;
    while (x)
    {
        ans += x % 10;
        x = x / 10;
    }
    return ans;
}

int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    /* this one has a very good application of mathematical deduction and binary search*/
    /* Firstly let's find the interval of possible values of s(x). Hence x2 ≤ n and n ≤ 1018, x ≤ 109. In other words, for every considerable solution x the decimal length of x does not extend 10 digits. So smax ≤ s(9999999999) = 10·9 = 90.

    Let's bruteforce the value of s(x) (0 ≤ s(x) ≤ 90). Now we have an ordinary square equation. The deal is to solve it and to check that the current bruteforced value of s(x) is equal to sum of digits of the solution. If the solution exists and the equality holds, we should relax the answer. */
    ll n;
    cin >> n;

    for (ll sx = 1; sx <= 90; sx++)
    {
        ll root = (-sx + sqrt(sx * sx + 4 * n));
        ll r = 0, y = root / 2;
        if (2 * y == root)
            while (y > 0)
            {
                r += y % 10;
                y = y / 10;
            }
        if (r == sx)
            cout << root / 2, exit(0);
    }

    cout << "-1";
    return 0;
}