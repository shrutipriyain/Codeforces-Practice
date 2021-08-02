//Valera and X-404A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char ar[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>ar[i][j];
		}
	}
	char diag=ar[0][0];
	char notDiag=ar[0][1];
	if(diag==notDiag)	{
		cout<<"NO";
		exit(0);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j || j==(n-i-1))
			{
				if(ar[i][j]!=diag || ar[i][j]==notDiag)
					{
						cout<<"NO";
						exit(0);
					}
			}
			else
			{
				if(ar[i][j]!=notDiag || ar[i][j]==diag) 
				{
					cout<<"NO";
					exit(0);
				}
			}
			
		}
	}
	cout<<"YES";
return 0;
}

