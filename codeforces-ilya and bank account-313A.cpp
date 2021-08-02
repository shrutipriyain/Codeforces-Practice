//codeforces-ilya and bank account-313A
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>0)
		cout<<n;
	else 
	{
		int a=n/10;
		int dig=n%10;
		int b=(n/100)*10+dig;
		if(a>b)
			cout<<a;
			else
			cout<<b;
	}
return 0;
}

