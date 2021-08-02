//Wrong Subtraction-977A-codeforces
#include <iostream>
using namespace std;
int main()
{
	int k,n;
	cin>>n>>k;
	while(k--)
	{
		int dig=n%10;
		if(dig!=0)
			n=n-1;
			else
			n=n/10;
	}
	cout<<n;
return 0;
}

