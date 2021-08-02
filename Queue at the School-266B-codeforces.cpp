//Queue at the School-266B-codeforces
#include <iostream>
using namespace std;
int main()
{
	int n,t;
	string s;
	cin>>n>>t;
	cin>>s;
	while(t--)
	{
		for(int i=0;i<n-1;i++)
		{
			if(s[i]=='B'&&s[i+1]=='G')
				{
					s[i]='G';
					s[i+1]='B';
					i=i+1; // agar b is before g, then skip to next pair
				}
		}
	}
	cout<<s;
return 0;
}

