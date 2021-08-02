#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(make_pair(t, i + 1));
    }
    sort(v.begin(), v.end());
    cout << v[n - k].first << endl;
    for (int i = n - 1; i >= n - k; i--)
    {
        cout << v[i].second << " ";
    }
    return 0;
}
