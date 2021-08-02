#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int ar[5][5];
	int a=0;
	int b=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>ar[i][j];
			if(ar[i][j]==1)
				{
					a=i;
					b=j;
				}		
		}
	}
	int sum=abs(a-2)+abs(b-2);
	cout<<sum;
return 0;
}

