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
    long long A,B;
    int n;
    cin>>A>>B>>n;
    int a[n];
    bool flag=true;
    int b[n]; 
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++) 	cin>>b[i];
	for(int i=0;i<n;i++)
	{
		while(b[i]>0)
		{
			b[i]=b[i]-A;
			B=B-a[i];
			if(B<=0 && b[i]>0)
			{
				flag=0;
				goto output;
			}
		}
	}
	output:
		if(flag==0)	cout<<"NO\n";
		else cout<<"YES\n";
}
return 0;
}
