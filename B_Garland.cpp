#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s1, s2;
    cin >> s1 >> s2;

    int l1 = s1.length();
    int l2 = s2.length();

    int bought[26] = {0};
    int want[26] = {0};

    for (int i = 0; i < l1; i++)
        bought[s1[i] - 'a']++;
    for (int i = 0; i < l2; i++)
        want[s2[i] - 'a']++;
    int garland = 0;
    for (int i = 0; i < 26; i++)
    {
        if (want[i] != 0 && bought[i] == 0) // there should be atleast one paper of each color
        {
            cout << -1;
            exit(0);
        }
        else if (bought[i] >= want[i])
            garland += want[i];
        else
            garland += bought[i];
    }

    if (garland == 0)
        cout << -1;
    else
        cout << garland;
    return 0;
}