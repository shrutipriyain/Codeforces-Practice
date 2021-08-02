//perfect permutation-233A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1|| n==3)
	{
		cout<<-1;
		exit(0);
	}
	if(n%2==0)
	{
	
	for(int i=n;i>=1;i--)
	{
		cout<<i<<" ";
	}
}
else
cout<<-1;
return 0;
}

