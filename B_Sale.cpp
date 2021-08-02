#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n);
    int sum = 0;
    for (int i = 0; i < m; i++)
        if (ar[i] < 0)
            sum = sum + (ar[i] * -1);
    cout << sum << endl;
    return 0;
}