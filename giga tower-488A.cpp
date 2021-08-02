//giga tower-488A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	if(x>=-8 && x<8)
		cout<<8-x;
	else
	{
		bool flag=1;
		int count=0;
		while(flag)
		{
			x++;
			count++;
			int y=x;
			while(y!=0)
			{
				int dig=y%10;
			//	cout<<dig<<endl;
				if(dig==8|| dig==-8)
				{
					cout<<count;
					flag=0;
				break;}
				y=y/10;
			}
		}
	}
return 0;
}

