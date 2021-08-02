//codeforces-fox and snakes-510A
#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0) // if the row is even
		{
			if(flag==0) 
			{
				for(int j=1;j<=(m-1);j++)
				cout<<".";
				cout<<"#\n";
				flag=1;
			}
			else if(flag==1)
			{
				cout<<"#";
				for(int j=1;j<=(m-1);j++)
				cout<<".";
				cout<<endl;
				flag=0;
			}
		}
		else
		{
			for(int j=1;j<=m;j++)
			cout<<"#";
			cout<<endl;
		}
	}
return 0;
}

