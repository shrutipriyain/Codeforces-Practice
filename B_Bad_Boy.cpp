#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Point
{
    ll dist;
    ll x;
    ll y;
};

ll distance(struct Point P, int i, int j)
{
    ll d = abs(P.x - i);
    d += abs(P.y - j);
    return d;
}
bool my_compare(const struct Point &a, const struct Point &b)
{
    return a.dist > b.dist;
}
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;
        Point p1, p2, p3, p4;
        p1.x = 1;
        p1.y = 1;
        p1.dist = distance(p1, a, b);

        p2.x = n;
        p2.y = m;
        p2.dist = distance(p2, a, b);

        p3.x = 1;
        p3.y = m;
        p3.dist = distance(p3, a, b);

        p4.x = n;
        p4.y = 1;
        p4.dist = distance(p4, a, b);

        vector<Point> v;
        v.push_back(p1);
        v.push_back(p2);
        v.push_back(p3);
        v.push_back(p4);
        sort(v.begin(), v.end(), my_compare);
        cout << v[0].x << " " << v[0].y << " " << v[1].x << " " << v[1].y << "\n";
    }
    return 0;
}