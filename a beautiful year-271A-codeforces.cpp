//a beautiful year-271A-codeforces
#include <iostream>
using namespace std;
int main()
{
	short n;
	cin>>n;
	while(1)
	{
		short n1=n;
		short d1=n1%10; n1=n1/10;
		short d2=n1%10;n1=n1/10;
		short d3=n1%10;n1=n1/10;
		short d4=n%10;
		bool b=(d1!=d2)&&(d1!=d3)&&(d1!=d4);
		bool b1=(d2!=d3)&&(d2!=d4)&&(d3!=d4);
		if(b&&b1){ break;}
		n=n+1;
		n1=n;
	}
	cout<<n;
return 0;
}

