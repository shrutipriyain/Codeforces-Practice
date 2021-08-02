#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    cin >> ar[0];
    int ans = ar[0];
    for (int i = 1; i < n; i++)
    {
        cin >> ar[i];
        int compare = max(ar[i], ar[i - 1]);
        ans = min(compare, ans);
    }
    ans = min(ans, ar[n - 1]);
    cout << ans;
    return 0;
}