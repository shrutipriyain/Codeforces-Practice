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
    int n,k;
    cin>>n>>k;
    int i=1;int j=n;
    int count=1;
    while(k--)
    {
        if(i==j)    
        {
            
            if(i==n)    i=count;
            else i=i+count;
            count++;
        }
        i++;
        j--;
    }
    cout<<i-1<<endl;
}
return 0;
}