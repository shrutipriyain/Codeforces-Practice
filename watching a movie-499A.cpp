//watching a movie-499A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	n++;
	int l[n];
	int r[n];
	l[0]=0;
	r[0]=0;
	for(int i=1;i<n;i++)
	{
		cin>>l[i]>>r[i];
	}
	int count=(l[1]-1)%x;// for initial time 
	for(int i=0;i<n;i++)
	{
		if(i!=0)
		count+=r[i]-l[i]+1;// for the good scenes
		if(i==n-1){break;
		}
		else
		count+=(l[i+1]-r[i]-1)%x; //for transition from one good scene to another
	}
	cout<<count;
	
return 0;
}

