//codechef-jan2021 long challenge
#include <bits/stdc++.h>
using namespace std;
int main()
{
	//converting binary to int: std::string bin("1101");
	//                         int dec = std::stoi(bin, nullptr, 2);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		string sample="abcdefghijklmnop";
		string sub='\0';
		for(int i=0;i<n;i=i+4)
		{
			string sub=s.substr(i,i+3);
			cout<<sub<<endl;
			cout<<stoi(sub,nullptr,2)<<endl;
		}
	}
return 0;
}

