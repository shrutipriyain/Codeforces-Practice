//codeforces-695A-contest
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(n==1)	cout<<9;
		else if(n==2) cout<<98;
		else if(n==3) cout<<989;
		else
		{
			n=n-3;
			cout<<989;
			string sample="0123456789";
			if(n<=10)cout<<sample.substr(0,n);
			else
			{
				for(int i=1;i<=n/10;i++)
				cout<<sample;
				cout<<sample.substr(0,(n%10));
			}
		}
		cout<<"\n";
		
	}
return 0;
}

