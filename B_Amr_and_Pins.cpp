#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int r,x,y,x1,y1;
cin>>r>>x>>y>>x1>>y1;
double dist = sqrt( ( ((x-x1)*(x-x1)) + ((y-y1)*(y-y1)) ) );
// cout<<dist<<"dist\n";
int ans = ceil(dist/(2*r));
cout<<ans;
return 0;}