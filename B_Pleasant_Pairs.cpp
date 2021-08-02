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
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int s = (i + 1) + (j + 1);
                if (ar[i] > s || ar[j] > s)
                    continue;
                else if (ar[i] == s && ar[j] == 1)
                    count++;
                else if (ar[j] == s && ar[i] == 1)
                    count++;
                else if (ar[i] * ar[j] == s)
                    count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}