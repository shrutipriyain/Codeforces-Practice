#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--)
{
    int n,k1,k2;
    cin>>n>>k1>>k2;
    int w,b;
    cin>>w>>b;
    if( k1==0 && k2==0 && w!=0) cout<<"NO\n";
    else if(k1==n && k2==n && b!=0) cout<<"NO\n";
    else if( w==0 && b==0)
    {
        cout<<"YES\n";
    }
    else if( w == 0 && b !=0)
    {
        if( k1==0 && k2==0 )    cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if( w != 0 && b ==0)
    {
        if( k1==n && k2==n )    cout<<"YES\n";
        else cout<<"NO\n";
    }
    else
    {
        int temp=k1+k2;
        if( (2*w)<=temp && (2*b)<=((2*n)-temp) ) 
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}
return 0;
}