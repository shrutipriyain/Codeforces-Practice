#include <iostream>
using namespace std;
int main()
{
	int t;
	int a,b;
	int sum;
	unsigned int min=2000000000;
	cin>>t;
	int save;
	while(t--)
	{
		cin>>a>>b;
		int greater;
		if(a>b)
			greater=a;
			else
			greater=b;
		for(int x=0;x<=greater;x++)
		{
			sum=(a^x)+(b^x);
			///cout<<sum<<endl;
			if(sum<min)
			{
				save=x;
				min=sum;
				}
	}
	cout<<min<<endl;
	cout<<"x value==="<<save<<endl;
	cout<<"________________________\n";
	min=2000000000;
	}
return 0;
}

