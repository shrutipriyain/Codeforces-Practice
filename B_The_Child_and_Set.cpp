#include <bits/stdc++.h>
using namespace std;
int arr1[100009];
int main()
{
    int n, k, l = 0;
    cin >> n >> k;
    for (int i = k; i >= 1; i--)
    {
        int t = i & -i; // t gives first set bit in binary form: 2^(first set bit)
        if (t <= n)
        {
            n -= t;
            arr1[l++] = i;
            if (n == 0)
                break;
        }
        //if t is greater than sum, we skip that and decrease t
    }
    if (n > 0)
        cout << -1;
    else
    {
        printf("%d\n", l);
        for (int i = 0; i < l; i++)
            cout << arr1[i] << " ";
    }
}