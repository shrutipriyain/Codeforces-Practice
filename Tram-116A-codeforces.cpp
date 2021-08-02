//Tram-116A-codeforces
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	int pass=0;
	int max=-1;
	while(n--)
	{
		cin>>a>>b;
		pass+=b-a;
		if(pass>max)
		max=pass;
	}
	cout<<max;
return 0;
}

