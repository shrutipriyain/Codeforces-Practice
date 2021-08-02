//codeforces-contest-strange list B
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		vector<int> v;
		for(int i=0;i<n;i++)	
		{
			int t;
			cin>>t;
			v.push_back(t);
	}
	int i=0;
	while(1)
	{
		if(v[i]%x==0)
		{
			for(int j=1;j<=x;j++)
			v.push_back(v[i]/x);	
			i++;
		}
		else
		break;
	}
	int sum=0;
	for(int i=0;i<v.size();i++)
		sum+=v[i];
	cout<<sum<<"\n";
	}
return 0;
}

