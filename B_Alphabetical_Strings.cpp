#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    bool flag = true;
    int freq[26] = {0};
    int size = s.length();
    // int i = 1;
    freq[s[0] - 'a']++;
    freq[s[size - 1] - 'a']++;
    for (int i = 1; i < size - 1; i++)
    {
        freq[s[i] - 'a']++;
        if (s[i] == 'a')
            continue;
        else if ((s[i] - s[i + 1]) > 0 && s[i] - s[i - 1] > 0)
        {
            flag = false;
            break;
        }
        else if (s[i] - s[i + 1] < 0 && s[i] - s[i - 1] < 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
        cout
            << "NO\n";
    else
    {
        for (int i = 0; i < 24; i++)
        {
            if (freq[i] == 0 && freq[i + 1] == 1)
            {
                flag = false;
                break;
            }
            else if (freq[i] > 1)
            {
                flag = false;
                break;
            }
        }
        if (freq[25] > 1)
            flag = false;
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
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
        string s;
        cin >> s;
        if (s == "a")
            cout << "YES\n";
        else
            solve(s);
    }

    // string ar[] = {"a", "ba", "ab", "bac", "ihfcbadeg", "z", "aa", "ca", "acb", "xyz", "ddcba"};
    // string ar[] = {"bac", "ihfcbadeg", "z"};
    // for (string s : ar)
    //     solve(s);

    // solve("ddcba");
    return 0;
}

////NOT CORRECT