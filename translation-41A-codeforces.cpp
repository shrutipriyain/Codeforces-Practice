//translation-41A=codeforces
#include <iostream>
#include <algorithm> // contains the reverse() function
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	reverse(t.begin(),t.end());
	if(s==t)
	cout<<"YES";
	else
	cout<<"NO";
return 0;
}

