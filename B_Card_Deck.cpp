//nope--didnt solve
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
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)    cin>>ar[i];
    int max_pos=-1;
    int max=INT_MIN;
    int end=n;
    int res[n];
    int j=0;
    while(max_pos)
    {
        for(int i=0;i<end;i++)
        {
            if(ar[i]>max) 
            {
                max=ar[i];
                max_pos=i;
            }
        }
        for(int i=max_pos;i<end;i++,j++)
        {
            res[j]=ar[i]; 
        }
        end=end-max_pos-1;
    }
    for(int i=0;i<n;i++)    cout<<res[i]<<" ";
    cout<<"\n";
}
return 0;
}