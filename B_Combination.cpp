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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(b, a));
    }
    sort(v.rbegin(), v.rend());
    // for (int i = 0; i < n; i++)
    //     cout << v[i].first << " " << v[i].second << endl;
    int counter = 1;
    for (int i = 0; i < n; i++)
    {
        counter += v[i].first;
    }
    int i = 0;
    long long points = 0;
    while (counter-- && i < n)
    {
        points += v[i].second;
        i++;
    }
    cout << points;
    return 0;
}