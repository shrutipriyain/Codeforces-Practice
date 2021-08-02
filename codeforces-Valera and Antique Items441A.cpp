//codeforces-Valera and Antique Items441A
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,v;
cin>>n>>v;
int i,j;
//int ar[][n];//remove
int sum=0;
vector<int> sellers;
for(i=0;i<n;i++)
{
	int m;
	cin>>m;
	int flag=1;
	for(j=0;j<m;j++)
		{
		int temp;
	 	cin>>temp;
		if(v>temp && flag==1)
			{
				sum++;
				sellers.push_back(i+1);
				flag=0;
			}
		}
	}
	cout<<sum<<"\n";
	for(int i=0;i<sellers.size();i++)	cout<<sellers[i]<<" ";
return 0;
}

