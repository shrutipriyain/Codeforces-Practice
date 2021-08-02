//playing with dice-378A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int counta=0;
	int draw=0;
	int countb=0;
	for(int x=1;x<=6;x++)
	{
		if( (abs(a-x)) < (abs(b-x)) )
			counta++;
		else if((abs(a-x)) == (abs(b-x)))
			draw++;
		else
			countb++;
	}
	cout<<counta<<" "<<draw<<" "<<countb;
	return 0;
}

