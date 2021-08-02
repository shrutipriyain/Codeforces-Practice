#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--)
{
    int p,q;
    cin>>p>>q;
    string s;
    cin>>s;
    int left=0,right=0,up=0,down=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='L')   left++;
        if(s[i]=='R')   right++;
        if(s[i]=='U')   up++;
        if(s[i]=='D')   down++;
    }
    bool flag1=0,flag2=0;
    if(p>0) 
    {
        if(right>=p)    
        {
            flag1=1;
        }
    }
    else
    {
        p=p*-1;
        if(left>=p)
        flag1=1;
    }
    if(q>0)
    {
        if(up>=q)   flag2=1;
    }
    else 
    {
        q*=-1;
        if(down>=q) flag2=1;
    }
    if(flag1 && flag2)  cout<<"YES\n";
    else cout<<"NO\n";
}
return 0;
}