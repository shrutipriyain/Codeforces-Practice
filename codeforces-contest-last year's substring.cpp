//codeforces-contest-last year's substring
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int flag=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='2')
			{
				for(int j=i;j<s.length();j++)	
					{
						if(s[j]=='0')
							{
								for(int k=j;k<s.length();k++)
									{
										if(s[k]=='2')
											{
												for(int l=k;l<s.length();l++)
												{
													if(s[l]=='0')
													{
														flag=1;
													}
												}
											}
										}
									}
								}
							}
						}
			if(flag==0)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
				
							
												
		}
	
return 0;
}

