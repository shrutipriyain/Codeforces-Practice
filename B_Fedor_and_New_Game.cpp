#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int ar[m];
    for(int i=0;i<m;i++)
        cin >> ar[i];
    int fedor;
    cin>>fedor;
    int count=0;
    for(int j=0;j<m;j++)
    {
        int diff=0;
        for(int i=0;i<n;i++)
        {
            if (((ar[j] >> i) & 1) != ((fedor >> i) & 1)) 
                diff++;
        }
        if(diff<=k) count++;
    }
    cout<<count;
}
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}