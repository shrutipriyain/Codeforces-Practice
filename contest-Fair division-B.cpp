//contest-Fair division-B
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int countA=0;
		int countB=0;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
			countA++;
			else countB++;
		}
		if(countA%2==0 && countB%2==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
return 0;
}

