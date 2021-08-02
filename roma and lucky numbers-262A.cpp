//roma and lucky numbers-262A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)	cin>>ar[i];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int count=0;
		while(ar[i]!=0)
		{
			int d=ar[i]%10;
			if( d==4 || d==7 ) count++;
			ar[i]=ar[i]/10;
		}
		if(count<=k)	sum++;
	}
	cout<<sum;
return 0;
}

