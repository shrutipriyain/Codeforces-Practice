//bear and raspberry-385A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,c;
	cin>>n>>c;
	int ar[n];
	for(int i=0;i<n;i++)	cin>>ar[i];
	int max=-99;
	int save=-1;
	for(int i=0;i<n-1;i++)
	{
		if( (ar[i]-ar[i+1]) > max)
		{
			max=ar[i]-ar[i+1];
		}
		
	}
	if(max>=c)	cout<<max-c;
	else cout<<0;
	return 0;
}
