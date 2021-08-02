#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    unordered_map<string,string> hash;
    while(m--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.length();
        int l2=s2.length();
        // cout<<"length "<<l1<<" "<<l2<<endl;
        string value=(l1<=l2)?s1:s2;
        // cout<<value<<" <--value\n";
        hash[s1]=value;
    }
    while(n--)
    {
        string s;
        cin>>s;
        cout<<hash[s]<<" ";
    }
}

int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}