//marks-152A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		//cout<<"extrct character " <<s[i][0]<<endl;
	}
	bool super[n]={};//stores if a student i has max marks or not
	for(int i=0;i<n;i++)
	{
		char max=s[0][i];
		for(int j=0;j<m;j++)
		{
			if(s[j][i] >= max)
			{
				super[i]=1;
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)	
	{
		if(super[i])
		ans++;
		cout<<super[i]<<endl;
	}
	cout<<ans;
	
return 0;
}

