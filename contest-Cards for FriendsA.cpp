//contest-Cards for FriendsA
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int w,h,n;
		cin>>w>>h>>n;
		if(w%2!=0 && h%2!=0)
		{
			if(n==1)	cout<<"YES\n";
			else		cout<<"NO\n";
		}
		else
		{
			if(w%2==0 && h%2==0)
			{
				if(w*h>=n)	cout<<"YES\n";
				else 			cout<<"NO\n";
			}
			else if(w%2==0)
			{
				if(w>=n)	    cout<<"YES\n";
				else 			cout<<"NO\n";
			}
			else
			{
				if(h >=n)	    cout<<"YES\n";
				else 			cout<<"NO\n";
			}
		}
	}
return 0;
}

