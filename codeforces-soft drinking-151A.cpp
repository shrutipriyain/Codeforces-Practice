//codeforces-soft drinking-151A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int drink=(k*l)/nl;
	int lime=c*d;
	int salt=p/np;
	int ans=min(lime,salt);
	ans=min(ans,drink);
	ans=ans/n;
	cout<<ans;
	
return 0;
}

