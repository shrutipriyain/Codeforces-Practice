//Codeforces-contest-favourite sequence-div690
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int input[n];
		for(int i=0;i<n;i++)
		{
			cin>>input[i];
		}
		int mid=ceil((double)n/2);
		int out[n];
		for(int i=0,j=0;i<n;i=i+2,j++)
			out[i]=input[j];
		for(int i=1,j=n-1;i<n;i=i+2,j--)
			out[i]=input[j];
		for(int i=0;i<n;i++)
			cout<<out[i]<<" ";
		cout<<endl;
	}
return 0;
}

