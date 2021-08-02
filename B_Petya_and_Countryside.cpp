#include <string>
#include <iostream>
using namespace std;
int i, n;
int k[1111];
int main()
{
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> k[i];
    int Max = 0, act;
    for (i = 0; i < n; i++)
    {
        act = 1;
        int idx = i;
        int next = idx + 1;
        while (k[next] <= k[idx] && next < n)
        {
            act++;
            idx++, next++;
        }

        idx = i;
        int prev = i - 1;
        while (k[prev] <= k[idx] && prev >= 0)
        {
            act++;
            idx--;
            prev--;
        }

        Max = max(Max, act);
    }
    cout << Max << endl;
    return 0;
}