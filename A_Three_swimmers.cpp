#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        if(p==a || p==b || p==c) cout<<0<<endl;
        else
        {
            ll x=p/a;
            ll y=p/b;
            ll z=p/c;
            ll X= (x+1)*a;
            ll Y= (y+1)*b;
            ll Z= (z+1)*c;
            ll mini=min(X,Y);
            mini=min(mini,Z);
            cout<<(mini-p)<<endl;
        }

    }
    return 0;
}
