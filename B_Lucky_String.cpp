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
    int quo = n / 4;
    int rem = n % 4;
    while (quo--)
        cout << "abcd";
    switch (rem)
    {
    case 0:
        break;
    case 1:
        cout << "a";
        break;
    case 2:
        cout << "ab";
        break;
    case 3:
        cout << "abc";
    }
    return 0;
}