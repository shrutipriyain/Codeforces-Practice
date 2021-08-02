#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if (a == 0)
        return b;

    return gcd(b % a, a);
}
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),greater<int>());
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int a,b;
            if( v[i]< (2*v[j])) 
            {
                a=v[i];
                b=2*v[j];
            }
            else
            {
                b=v[i];
                a=2*v[j];
            }
            int g = gcd(a,b);
            if(g!=1) count++;
        }
    }
    cout<<count<<"\n";
}

return 0;
}