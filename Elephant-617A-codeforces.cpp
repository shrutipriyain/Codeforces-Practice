//Elephant-617A-codeforces
#include <iostream>
using namespace std;
int main()
{
	int x,steps=0;
	cin>>x;
	for(int i=5;i>=1;i--)
	{
		steps+=x/i;
		x=x%i;
	}
	cout<<steps;
return 0;
}

