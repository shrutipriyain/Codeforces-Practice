#include <bits/stdc++.h>
using namespace std;

int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
long long x, y, f[10], n;
    cin>>x>>y>>n;
    f[1]=x; // found by obervation that values repeat
    f[2]=y;
    f[3]=y-x;
    f[4]=-x;
    f[5]=-y;
    f[0]=x-y;
    long long nr= f[n%6]%(1000000007);
    if(nr<0)
        nr=1000000007+nr;
    cout<<nr;

return 0;
}