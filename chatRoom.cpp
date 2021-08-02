#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str[100];
	cin>>str;
	int n=sizeof(str)/sizeof(char);
	string s;
	bool flagh=0;
	bool flage=0;
	bool flago=0;
	int flagl=0;
	for(int i=0;i<n;i++)
	{
		if(str[i]=='h'&& flagh==0)
		{
			
			s[0]='h';
			flagh=1;
		}
		if(str[i]=='e'&& flage==0)
		{
			s[1]='e';
			flagh=1;
		}
		if(str[i]=='o'&& flago==0)
		{
			s[4]='o';
			flagh=1;
		}
		if(str[i]=='l' && str[i+1]=='l' && flagl==0)
		{
			flagl=1;
			s[2]='l';
			s[3]='l';
		}
	}
	cout<<s;
	if(s[0]=='h' && s[1]=='e' && s[2]=='l' && s[3]=='l' && s[4]=='o' )
		cout<<"YES";
			else
			cout<<"NO";
return 0;
}

