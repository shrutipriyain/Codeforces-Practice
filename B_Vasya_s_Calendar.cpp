#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, d;
    cin >> d >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        count += d - ar[i - 1];
    }
    cout << count;
    return 0;
}