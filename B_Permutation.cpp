#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i;
    cin >> n >> k;
    for (i = 1; i <= 2 * k; i += 2)
        cout << i + 1 << " " << i << " ";
    for (i = 2 * k + 1; i <= 2 * n; i++)
        cout << i << " ";
    return 0;
}