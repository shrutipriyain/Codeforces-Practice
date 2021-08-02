//Bear and Big Brother-791A-codeforces
#include <iostream>
using namespace std;
int main()
{
	int i=0;
	int a,b;
	cin>>a>>b;
	while(a<=b)
	{
		a=3*a;
		b=2*b;
		i++;
	}
	cout<<i;
return 0;
}

