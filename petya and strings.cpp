//petya and strings-codechef
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int len=s1.length();
	int sum=0;	
	
	for(int i=0;i<len;i++)//converts both strings to uppercase
	{
		if(s1[i]>=97)
		s1[i]=s1[i]-32;
		if(s2[i]>=97)
		s2[i]=s2[i]-32;	
	}
	for(int i=0;i<len;i++)//compares -if all apha are equal then sum should be equal to 0 else it breaks off
	{
		if(s1[i]==s2[i])
		sum++;
		else if(s1[i]>s2[i])
		{
			cout<<"1";
			break;
		}
			else if(s1[i]<s2[i])
		{
			cout<<"-1";
			break;
		}
	}
	if(sum==len)
		cout<<"0";
		
	
return 0;
}

