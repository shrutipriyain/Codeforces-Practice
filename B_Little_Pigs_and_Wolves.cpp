#include <bits/stdc++.h>
using namespace std;
struct coordinate
{
    int x;
    int y;
};
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, n;
    cin >> m >> n;
    int v[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            v[i][j] = c;
        }
    }
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == 'W')
            {
                if ((i + 1) < m && v[i + 1][j] == 'P')
                {
                    //cout << "ate down " << (i + 1) << "\n";
                    count++;
                    v[i + 1][j] == '.';
                }
                else if ((i - 1) >= 0 && v[i - 1][j] == 'P')
                {
                    //cout << "ate up" << (i - 1) << "\n";

                    count++;
                    v[i - 1][j] == '.';
                }
                else if ((j + 1) < n && v[i][j + 1] == 'P')
                {
                    //cout << "ate right" << (j + 1) << "\n";

                    count++;
                    v[i][j + 1] = '.';
                }
                else if ((j - 1) >= 0 && v[i][j - 1] == 'P')
                {
                    //cout << "ate left" << (j - 1) << "\n";

                    count++;
                    v[i][j - 1] = '.';
                }
            }
        }
    }
    cout << count;
    return 0;
}