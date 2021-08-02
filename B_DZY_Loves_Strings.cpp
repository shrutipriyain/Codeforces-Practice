#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
string s;
cin>>s;
int k;
cin>>k;
unordered_map<char,int> hash;
int max=INT_MIN;
for(int i=0;i<26;i++)
{
    int f;
    cin>>f;
    if(f > max) max=f;
    hash['a'+i]=f; // 1--A and so on
}
long long int product=0;
for(int i=0;i<s.length();i++)
{
    char c = s[i];
    //cout<<"c "<<c<<" hash[c] : "<<hash[c]<<endl;
    product+=hash[c]*(i+1);
    //cout<<"product :"<<product<<endl;
}
// cout<<product<<" 1\n";
// cout<<"max : "<<max<<endl;
int i=s.length()+1;
while(k--)
{
    product+=max*i;
    i++;
    //cout<<"k :"<<k<<" product: "<<product<<" i: "<<i<<endl;
}
 cout<<product<<"\n";
return 0;
}