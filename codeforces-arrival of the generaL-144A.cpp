//codeforces-arrival of the generaL-144A
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	int pos_max,pos_min;
	int min=999;
	int max=-999;
	for(int i=0;i<n;i++)
	{
	cin>>ar[i];
	if(ar[i]>max) // here we want the first element of max, hence no equal to sign
	{
		max=ar[i];
		pos_max=i;
	}
	if(ar[i]<=min) // here we want the last loc of the min element hence less than or equal to
	{
		min=ar[i];
		pos_min=i;
	}
	}
	if(pos_max>pos_min)
	cout<<(pos_max+n-pos_min-2);
	else 
	cout<<(pos_max+n-pos_min-1);
	
	return 0;
}
