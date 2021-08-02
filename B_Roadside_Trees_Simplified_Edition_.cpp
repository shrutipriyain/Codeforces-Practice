#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
int h[n];
for(int i=0;i<n;i++)
{
    cin>>h[i];
}
int dist=n+n-1; // for eating and moving from one tree to another
dist+=h[0];
// cout<<"distance outside loop "<<dist<<endl;
for(int i=0;i<n-1;i++)
{
    dist+=abs(h[i]-h[i+1]);
    // cout<<"distance "<<dist<<" i ="<<i<<endl;
}
cout<<dist;
return 0;
}