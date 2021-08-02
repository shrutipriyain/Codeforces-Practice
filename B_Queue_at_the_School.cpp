#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n, t;
cin>>n>>t;
string s;
cin>>s;
while(t--)
{
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='G') 
        {
            //swap
            s[i]='G';
            s[i+1]='B';
            i=i+1;
        }
    }   
    //cout<<s<<" "<<t<<endl;
}
cout<<s;
return 0;
}