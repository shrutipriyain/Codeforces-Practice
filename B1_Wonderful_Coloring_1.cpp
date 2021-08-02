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
        string s;
        cin >> s;
        int freq[26] = {0};
        int size = s.length();

        for (int i = 0; i < size; i++)
        {
            freq[s[i] - 'a']++;
        }

        int totalsum = 0;
        int onesum = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 1)
                onesum++;
            else if (freq[i] >= 2)
                totalsum++;
            else
            {
                /* do nothing */
            }
        }
        totalsum = totalsum + (onesum / 2);
        cout << totalsum << "\n";
    }
    return 0;
}
