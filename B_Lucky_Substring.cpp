#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int four = 0;
    int seven = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4')
            four++;
        else if (s[i] == '7')
            seven++;
    }
    if (four == 0 && seven == 0)
        cout << -1;
    else
    {
        if (four >= seven)
            cout << 4;
        else
            cout << 7;
    }
    return 0;
}