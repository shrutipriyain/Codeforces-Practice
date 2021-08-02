//nearly lucky numbers-110A-codeforces
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int sum=0;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='4' || s[i]=='7')
			sum++;
	}
	if(sum==4|| sum==7)
	cout<<"YES";
	else
	cout<<"NO";
return 0;
}

