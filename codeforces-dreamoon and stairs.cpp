//codeforces-dreamoon and stairs-476A
#include <iostream>
#include <process.h>
using namespace std;
int main()
{
	/*
	int n,m;
	cin>>n>>m;
	if(n<m)
		cout<<-1;
	else if(n%m==0)
		cout<<(n/m+1);
	else
	cout<<-1;
	*/
	int n,m;
	cin>>n>>m;
	if(n<m)	cout<<-1;
	else if(n==m) cout<<m;
	else
	{
		int a=0;
		int b=(n/2);
		while(1)
		{
			if((a+b)%m==0)
			{
				cout<<(a+b);
				return 0;
			}
			a=a+2;
			b--;
		}
		cout<<-1;
	}
return 0;
}

