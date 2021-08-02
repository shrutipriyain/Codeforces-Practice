//Boy and Girl CodeForces(236A)
//initialised a null array of 26 size which contains frequency of each alphabet;
// then, the index of letter in the english alphabet is determined by subtracting 
// 97(since only small case letters are present.then finally count the freq of distinct alphabetes
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.length();
	int dif;
	int ar[26]={};
	for(int i=0;i<len;i++)
	{
		dif=((int)s[i])-97;
		ar[dif]=ar[dif]+1;
	}
	int freq=0;
	for(int i=0;i<26;i++)
	{
		if(ar[i]!=0)
			freq++;	
	}		
	if(freq%2!=0)
		cout<<"IGNORE HIM!";
	else
		cout<<"CHAT WITH HER!";	
return 0;
}
