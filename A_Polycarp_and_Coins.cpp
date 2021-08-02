#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int div = n / 3;
        int rem = n % 3;
        if (rem == 0)
            cout << div << " " << div << "\n";
        else if (rem == 1)
            cout << (div + 1) << " " << div << "\n";
        else
            cout << div << " " << (div + 1) << "\n";
    }
    return 0;
}