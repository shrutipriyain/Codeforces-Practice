#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x0, y0;
    cin >> n >> x0 >> y0;
    unordered_set<int> count;
    bool xequal = 0;
    bool yequal = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x != x0 && y != y0)
        {
            int slope = (y0 - y) / (x0 - x);
            count.insert(slope);
        }
        else if (x == x0)
            xequal = 1;
        else if (y == y0)
            yequal = 1;
    }
    int ans = count.size();
    if (xequal)
        ans++;
    if (yequal)
        ans++;
    cout << ans;

    return 0;
}