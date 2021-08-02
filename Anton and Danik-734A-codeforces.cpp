//Anton and danik-734A-codeforces
#include <iostream>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n>>s;
	int suma=0;
	int sumd=0;
	for(int i=0;i<n;i++)
		{
			if(s[i]=='A')
			suma++;
			else if(s[i]='D')
			sumd++;
		}
		if(suma>sumd)
		cout<<"Anton";
		else if(suma<sumd)
		cout<<"Danik";
		else 
		cout<<"Friendship";
return 0;
}

