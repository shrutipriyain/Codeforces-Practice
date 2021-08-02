//array300A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ar[n];
	bool f1=1,f2=1;
	int s1,s2;
	vector<int> pos;
	vector<int> neg;
	vector<int> zeros;
	for(int i=0; i< n; i++)
	{
		cin>>ar[i];
		if(ar[i]>0)	pos.push_back(ar[i]);
		else if(ar[i]==0)	zeros.push_back(ar[i]);
		if(ar[i]<0)	neg.push_back(ar[i]);
	}
	if(pos.size()==0)
	{
		cout<<1<<" "<<neg[0]<<endl;
		cout<<2<<" "<<neg[1]<<" "<<neg[2]<<endl;
		cout<<n-3<<" ";
		for(int i=3;i<neg.size();i++)	cout<<neg[i]<<" ";
		for(int i=0;i<zeros.size();i++)	cout<<zeros[i]<<" ";
	}
	else
	{
		cout<<1<<" "<<neg[0]<<endl;
		cout<<1<<" "<<pos[0]<<endl;
		cout<<n-2<<" ";
		for(int i=1;i<pos.size();i++)	cout<<pos[i]<<" ";
		for(int i=1;i<neg.size();i++)	cout<<neg[i]<<" ";
		for(int i=0;i<zeros.size();i++)	cout<<zeros[i]<<" ";
	}
	
	
	
return 0;
}

