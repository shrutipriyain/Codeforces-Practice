#include <bits/stdc++.h>
using namespace std;

void solve(int ar[], int n)
{
    if (n == 1)
    {
        cout << 1;
        return;
    }
    int count = 2;
    int ans = count;
    for (int i = 2; i < n; i++)
    {
        if (ar[i - 1] + ar[i - 2] == ar[i])
            count++;
        else
        {
            ans = max(count, ans);
            count = 2;
        }
        //cout << "count =" << count << endl;
    }
    cout << max(ans, count);
}

int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    solve(ar, n);
    return 0;
}