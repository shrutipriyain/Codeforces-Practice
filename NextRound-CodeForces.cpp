/*A total of n participants took part in the contest ( n?=?k), and you already know their scores. 
Calculate how many participants will advance to the next round.
Input
The first line of the input contains two integers n and k (1?=?k?=?n?=?50) separated by a single space.
The second line contains n space-separated integers a 1,?a 2,?...,?a n (0?=?a i?=?100), where a i is the score earned 
by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n?-?1 
the following condition is fulfilled: a i?=?a i?+?1).
Output
Output the number of participants who advance to the next round.*/
#include <iostream>
using namespace std;
int main()
{
	int n,k,sum=0;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	int mark=ar[k-1];
	for(int i=n-1;i>=0;i--)
	{
		if(ar[i]>=mark && ar[i]>0)
		sum++;
	}
	cout<<sum;
	
return 0;
}

