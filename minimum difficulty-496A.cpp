//minimum difficulty-496A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	int max=-99999;
	int diff;
	if(n<4)
	{
		cout<<ar[n-1]-ar[0];
	}
	else{
	int ans=999999;
	for(int i=1;i<n-1;i++)//ith element will be removed
	{
		for(int j=0;j<n-1;j++)
		{
			if(j==i)
			diff=ar[j+1]-ar[j-1];
			else
			diff=ar[j+1]-ar[j];
			if(diff>max) //coz difficulty=max diff
			max=diff;
			//cout<<"i=: "<<i<<"j=: "<<j<<"diff : "<<diff<<endl;
		}
		//cout<<"=============================================="<<max<<endl;
		if(max<ans) //coz we have to find the min of diff permutations
			ans=max;
	}
	cout<<ans;}
return 0;
}

