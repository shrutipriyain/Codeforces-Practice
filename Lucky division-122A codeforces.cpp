//Lucky division-122A codeforces
#include <iostream>
//#include <process>
using namespace std;
bool isLucky(int n)
{
	while(n!=0)
	{
		int dig=n%10; 
		if(dig!=4 && dig!=7)
		{	
		return 0;
		}
		n=n/10;
	}
	return 1;
}

int main()
{
	
	int n;
	cin>>n;
	if(isLucky(n))
	{
		cout<<"YES";
		exit(0);
	}
	int flag=0;
	for(int i=1;i<n;i++)
	{
		if(isLucky(i))
		{
			if(n%i==0)
			{
				flag=1;
				cout<<"YES";
				break;
			}
		}
	}
	if(flag==0)
	cout<<"NO";
	return 0;
}
