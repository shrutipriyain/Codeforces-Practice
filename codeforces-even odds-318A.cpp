//codeforces-even odds-318A
#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	if(n%2==0)
	{
		if(k<=n/2)
		{
			cout<<(2*k)-1;
		}
		else
		{
			cout<<(k-(n/2))*2;
		}
	}
	else
	{
		if(k<=((n/2)+1))
		cout<<(2*k)-1;
		else
		cout<<(k-1-(n/2))*2;
	}
return 0;
}

