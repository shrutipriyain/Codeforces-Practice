#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];

	//bubble sort
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	
	// comparing sum 1 and sum2
	int j=1;
	for(int counter=0;counter<n;counter++)
	{
	int sum1=0;
	int sum2=0;
		for(int i=0;i<=(n-1-j);i++)
			sum1+=ar[i];
		for(int i=n-1;i>=n-j;i--)
			sum2+=ar[i];
		
		if(sum1<sum2)
		{
			
			cout<<j;
			break;
		}
		else 
		j++;
	}
	
		
	
return 0;
}

