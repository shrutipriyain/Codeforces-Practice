#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int d, SUM;
    cin >> d >> SUM;
    int minimumArray[d];
    int maximumArray[d];
    int maxSum = 0;
    int miniSum = 0;
    for (int i = 0; i < d; i++)
    {
        cin >> minimumArray[i];
        cin >> maximumArray[i];
        miniSum += minimumArray[i];
        maxSum += maximumArray[i];
    }
    if (maxSum < SUM || miniSum > SUM)
    {
        cout << "NO";
    }
    else if (maxSum == SUM)
    {
        cout << "YES\n";
        for (int i = 0; i < d; i++)
            cout << maximumArray[i] << " ";
    }
    else
    {
        cout << "YES\n";
        int diff = SUM - miniSum;
        for (int i = 0; i < d; i++)
        {
            if ((minimumArray[i] + diff) > maximumArray[i])
            {
                diff = (diff + minimumArray[i]) - maximumArray[i];
                minimumArray[i] = maximumArray[i];
            }
            else
            {
                minimumArray[i] += diff;
                break;
            }
        }
        for (int i = 0; i < d; i++)
        {
            cout << minimumArray[i] << " ";
        }
    }

    return 0;
}