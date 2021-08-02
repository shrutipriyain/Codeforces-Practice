//codeforces-anton and letters-443A
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	string s;
	int freq[26]={};
	getline(cin,s);
	int len=s.length();
	int dif;
	for(int i=0;i<len;i++)
	{
		if(isalpha(s[i]))
		{
			dif=((int)s[i])-97; //gives pos of the character in aplabets
			freq[dif]++;
		}
	}
	int sum=0;
	for(int i=0;i<26;i++)
	{
		if(freq[i]!=0)
			sum++;
	}
	cout<<sum;
return 0;
}

