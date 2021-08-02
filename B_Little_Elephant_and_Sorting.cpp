#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, i, sum = 0;
    cin >> n;
    int c[n];
    cin >> c[0];
    for (i = 1; i < n; i++)
    {
        cin >> c[i];
        if (c[i] < c[i - 1])
            sum = sum + c[i - 1] - c[i];
    }
    cout << sum;
    return 0;
}