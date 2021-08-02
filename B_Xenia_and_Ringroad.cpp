#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n,m;
cin>>n>>m;
int ar[m];
for(int i=0;i<m;i++) cin>>ar[i];
ll dist=ar[0]-1;
for(int i=1;i<m;i++)
{
    if(ar[i]< ar[i-1])
    {
        dist+=n-ar[i-1]+ar[i];
    }
    else if( ar[i] == ar[i-1] )
    {
        dist+=0;
    }
    else
    {
        dist+=ar[i]-ar[i-1];
    }
}
cout<<dist;
return 0;
}