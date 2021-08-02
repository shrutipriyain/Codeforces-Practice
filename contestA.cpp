#include <bits/stdc++.h>
using namespace std;
int main()
{
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(i%2==0)//at even places alice plays
        {
            if(s[i]=='a') s[i]='b';
            else s[i]='a';
        }
        else // at odd places Bob plays
        {
            if(s[i]=='z') s[i]='y';
            else s[i]='z';
        }
    }
    cout<<s<<"\n";
}
return 0;
}