//codeforces-i want to be the guy-469A
#include <iostream>
using namespace std;
int main()
{
	int n,freqP,freqQ;
	cin>>n;
	
	int levels[n+1]={};
	
	cin>>freqP;
	int p[freqP];
	for(int i=0;i<freqP;i++)
		cin>>p[i];
		
	cin>>freqQ;
	int q[freqQ];
	for(int i=0;i<freqQ;i++)
		cin>>q[i];
	/*end of input*/
	for(int i=0;i<freqP;i++)
		levels[p[i]]++;
		
	for(int i=0;i<freqQ;i++)
		levels[q[i]]++;
	
		int flag=0;
		
	for(int i=1;i<=n;i++)
	{
		if(levels[i]==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1) cout<<"Oh, my keyboard!";
	else cout<<"I become the guy.";
	
return 0;
}

