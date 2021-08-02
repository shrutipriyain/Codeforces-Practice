#include <bits/stdc++.h>
using namespace std;
double PI = 3.1415926536;
void solve(int ar[], int n)
{
    sort(ar, ar + n);
    if (n % 2 == 0)
    {
        double r = 0, r1, r2, area = 0;
        for (int i = 1; i < n; i += 2)
        {
            r1 = ar[i] + ar[i - 1];
            r2 = ar[i] - ar[i - 1];
            r += r1 * r2;
            // area += r * r;
        }
        //cout << 'r' << r << endl;
        area = r * 3.1415926536;
        cout << area << endl;
    }
    else
    {
        double r, r1, r2, area = 0;
        r = ar[0] * ar[0];
        for (int i = 2; i < n; i += 2)
        {
            r1 = ar[i] + ar[i - 1];
            r2 = ar[i] - ar[i - 1];
            r += r1 * r2;
            // area += r * r;
        }
        // cout << 'r' << r << endl;

        area = r * 3.1415926536;
        cout << area << endl;
    }
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