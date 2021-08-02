//codeforces-Appleman and Easy Task462A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char box[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			{
			cin>>box[i][j];
			}
	}
	//logic starts here
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			{
				int count=0;
				if(i+1<=n-1)
				{
					if(box[i+1][j]=='o')	count++;
				}
				if(i-1>=0)
				{
					if(box[i-1][j]=='o')	count++;
				}
				if(j+1<=n-1)
				{
					if(box[i][j+1]=='o')	count++;
				}
				if(j-1>=0)
				{
					if(box[i][j-1]=='o')	count++;
				}
				if(count%2!=0)
				{
					cout<<"NO";
					exit(0);
				}
			}
	}
	cout<<"YES";
return 0;
}

