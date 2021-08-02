#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n,m;
cin>>n>>m;
int ar[m];
for(int i=0;i<m;i++)
{
    cin>>ar[i];
}
sort(ar,ar+m);
if( ar[0] == 1 || ar[m-1] == n)
{
    cout<<"NO\n";
    return 0;
} 
else
{
    for(int i=0;i<m;i++)
    {
        if( (ar[i+2] - ar[i+1] == 1) && (ar[i+1] - ar[i] ==1) )
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}
return 0;
}