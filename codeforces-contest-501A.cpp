//codeforces-contest-501A
#include <bits/stdc++.h>
using namespace std;
double score(double p,double t)
{
	return max( ( (3*p)/10 ), (p- ((p/250)*t ) ));
}
int main()
{
	double a,b,c,d;
	cin>>a>>b>>c>>d;
//	cout<<"A score: "<<score(a,c)<<endl;
//	cout<<"B score: "<<score(b,d)<<endl;
	if(score(a,c)>score(b,d))	
	{
	cout<<"Misha";}
	else if( score(a,c) == score(b,d) ) {
	
	cout<<"Tie";}
	else					{
		cout<<"Vasya";}
	
return 0;
}

