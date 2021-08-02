//cifera-114A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long k, l;
	cin>>k>>l;
	bool flag=1;
	long long comp=k;
	if(l%k!=0) cout<<"NO"<<endl;
	else
	{
		int count=0;
		while(flag && comp<=l)
		{
			if(comp==l)
			{
				flag=0;
				break;
			}
			comp*=k;
			count++;
			
		}
		if(!flag){
		
		cout<<"YES\n";
		cout<<count;}
		else cout<<"NO";
	}
	
	
return 0;
}

