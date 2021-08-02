//codeforces-puzzles-337A
#include <iostream>
#include <algorithm>//contains the sort() function
//#include <cmath>
using namespace std;
int main()
{
	int count,n;
	cin>>count>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	sort(ar,ar+n); // sorts array ar from ar to ar+n location
	int min=9999;
	for(int i=0;i<=n-count+1;i++)
	{
		if(abs(ar[i+count-1]-ar[i])<=min)
		min=abs(ar[i+count-1]-ar[i]);
	}
	cout<<min;
return 0;
}

