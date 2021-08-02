//domino-350A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin >> n;
	int a[n],b[n];
	int countA=0, countB=0; // countA and countB stores the no of odd numbers in the arrays
	for(int i =  0 ; i < n ; i ++)
	{
		cin >> a[i];
		if(a[i]%2!=0)
			countA++;
	}
	for(int i =  0 ; i < n ; i ++)
	{
		cin >> b[i];
		if(b[i]%2!=0)
			countB++;
	}
	//cout<< countA <<" " <<countB<<endl;
	
	if(countA==0 && countB==0) cout<<0;
	else if(countA==0 || countB==0) cout<<-1;
	else
	{
		if(countA == countB) cout<< countA;
		else 				cout<<-1;
	}
return 0;
}

