#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int x=a;
    int y=(b-1)*a;
    int z=a*b;
    int i=2;
    // cout<<x<<" "<<y<<" "<<z<<"\n";
    
    while(x==y)
    {
        // cout<<"Inside while loop before changes "<<x<<" "<<y<<" "<<z<<"\n";
        x=x*i;
        y=(b-i)*a;
        z=z*i;
        i++;
        // cout<<"Inside while loop after changes "<<x<<" "<<y<<" "<<z<<"\n";
    }
    if(y==0) cout<<"NO\n";
    else
    cout<<"YES\n"<<x<<" "<<y<<" "<<z<<"\n";
    return;
}

int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--) solve();
return 0;
}