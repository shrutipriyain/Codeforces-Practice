//Soldier and Bananas-546A-Codeforces
#include <iostream>
using namespace std;
int main()
{
	unsigned int k,n,w;
	cin>>k>>n>>w;
	int dif=((w*(w+1)*k)/2)-n;
	if(dif<=0)
		cout<<0;
		else
		cout<<dif;
return 0;
}

