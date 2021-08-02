//colourful stones-265A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,c;
	cin >> s >> c;
	int i;
	int j=0;
	for(i=0;i< c.length();i++)
	{
		if(s[j]==c[i])
		{
			j++;
		}
	}
	cout<<j+1;
return 0;
}

