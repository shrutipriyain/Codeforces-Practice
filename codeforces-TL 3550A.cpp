//codeforces-TL 3550A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[n];
	int b[m];
	int max,mini;
	cin>>a[0];
	max=mini=a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		max=a[i];
		if(a[i]<mini)	mini=a[i];	
	}
	int min;
	cin>>b[0];
	min=b[0];
	for(int i=1;i<m;i++)
	{
		cin>>b[i];
		if(b[i]< min)
		min=b[i];
	}
	if(max>min)	cout<<-1;
	else
	{
	bool flag=0;
	//cout<<"max "<<max <<" min "<<min<<endl;
	for(int i=max;i<min;i++)
	{
		if((2*mini)<=i)
		{
			cout<<i;
			flag=1;
			break;
		}
	}
	if(!flag)	cout<<-1;
	}	
return 0;
}

