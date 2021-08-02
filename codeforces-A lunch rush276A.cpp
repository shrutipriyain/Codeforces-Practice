//codeforces-A lunch rush276A
#include <iostream>
using namespace std;
int main()
{
	int n;
	unsigned int k;
	cin>>n>>k;
	int f[n];
	int t[n];
	cin>>f[0]>>t[0];
	int joy;
	if(t[0]>k)	
		joy=f[0]-t[0]+k;
	else 
		joy=f[0] ;
	long long maxjoy=joy;
	for(int i=1;i<n;i++)
	{
		cin>>f[i]>>t[i];
		if(t[i]>k)	{
		
		joy=f[i]-t[i]+k;
	}
		else 
		{
		joy=f[i];}
		if(joy>maxjoy)	maxjoy=joy;
	}
	cout<<maxjoy;
	
	
return 0;
}

