#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios:
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(0);
    //     cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string enemy;
        string george;
        // for (int i = 0; i < n; i++)
        cin >> enemy;
        // for (int i = 0; i < n; i++)
        cin >> george;

        int ans = 0;

        // for (int i = 0; i < n; i++)
        //     cout << enemy[i] << " " << george[i] << endl;

        /* checking for the 0th pawm */
        if (george[0] == '1')
        {
            if (enemy[0] == '0')
                ans++;
            else if (enemy[1] == '1')
            {
                enemy[1] = '0';
                ans++;
            }
        }
        /* checking for the nth pawn */
        if (george[n - 1] == '1')
        {
            if (enemy[n - 1] == '0')
                ans++;
            else if (enemy[n - 2] == '1')
            {
                enemy[n - 2] = '0';
                ans++;
            }
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (george[i] == '1')
            {
                if (enemy[i] == '0')
                    ans++;
                else
                {
                    /* look for left and right */
                    if (enemy[i - 1] == '1')
                    {
                        ans++;
                        enemy[i - 1] = '0';
                    }
                    else if (enemy[i + 1] == '1')
                    {
                        ans++;
                        enemy[i + 1] = '0';
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}