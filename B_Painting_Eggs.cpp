#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int tot = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (tot + a <= 500)
        {
            tot += a;
            cout << "A";
        }
        else
        {
            tot -= b;
            cout << "G";
        }
    }
    cout << endl;

    return 0;
}
