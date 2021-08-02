#include <bits/stdc++.h>
using namespace std;
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
        int xa, ya, xb, yb, xf, yf;
        cin >> xa >> ya >> xb >> yb >> xf >> yf;
        int greaterx = (xa > xb) ? xa : xb;
        int lesserx = (xa < xb) ? xa : xb;

        int greatery = (ya > yb) ? ya : yb;
        int lessery = (ya < yb) ? ya : yb;
        int ans = 0;

        // cout << "Greater x: " << greaterx << endl;
        // cout << "Greater y: " << greatery << endl;
        // cout << "lesser x: " << lesserx << endl;
        // cout << "lesser y: " << lessery << endl;

        if (xa == xb)
        {
            if (xf >= lesserx && xf <= greaterx && yf >= lessery && yf <= greatery)
            {
                ans = (greatery - lessery) + 2;
            }
            else
            {
                ans = (greatery - lessery);
            }
        }
        else if (ya == yb)
        {
            if (xf >= lesserx && xf <= greaterx && yf >= lessery && yf <= greatery)
            {
                ans = (greaterx - lesserx) + 2;
            }
            else
            {
                ans = greaterx - lesserx;
            }
        }
        else
        {
            ans = (greaterx - lesserx) + (greatery - lessery);
        }
        cout << ans << "\n";
    }
    return 0;
}