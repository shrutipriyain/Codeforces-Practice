//word-59A-codeforces
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.length();
	int upCount=0;
	int loCount=0;
	for(int i=0;i<len;i++)
	{
		if(isupper(s[i]))
			upCount++;
		else if(islower(s[i]))
			loCount++;
	}
	if(loCount>=upCount)
	{
		for(int i=0;i<len;i++)
		s[i]=tolower(s[i]);
		cout<<s;
	}
	else
	{
		for(int i=0;i<len;i++)
		s[i]=toupper(s[i]);
		cout<<s;
	}
	
return 0;
}

