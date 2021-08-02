//codeforces-devu and singer 439A
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n,d;
cin>>n>>d;
int ar[n];
int sum=0;
for(int i=0;i<n;i++)    {
	cin>>ar[i];
	sum+=ar[i];
}
int devu=((n-1)*10)+sum;
if(devu<=d)
	{
		int churu=((n-1)*10)/5;
		churu+=(d-devu)/5;
		cout<<churu;
	}
else
cout<<-1;



return 0;
}

