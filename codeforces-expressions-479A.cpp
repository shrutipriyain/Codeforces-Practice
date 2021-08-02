//codeforces-expressions-479A
/*	logic
if a number contains 1, then multiplying it gives the same result, so if a number contains 1s then 
again three cases----1) all three are 1=then add all
---------------------2) only one 1 is present=then add with bagal wla and multiply with third
---------------------3)two ones are present=again 2 cases:
														i) non consecutive--add all
														ii)consecutive==multiply 2 with the 3rd no*/

#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a!=1 &&b!=1 && c!=1)//all 3 numbers are not 1
	cout<<a*b*c;
	else
	{
		if(a==1 && b==1 && c==1) // all three numbers are 1
			cout<<3;
		else if(a==1 &&b!=1 &&c!=1) //only a is 1
			cout<<(a+b)*c;
		else if(a!=1 &&b==1 &&c!=1) //only b is 1
		{
			int big=(a>c)?a:c;
			int medium=(a<c)?a:c;
			cout<<big*(medium+b);
		}
		else if(a!=1 &&b!=1 &&c==1) //only c is 1
			cout<<a*(b+c);
		else //two numbers are 1
		{
			if(a==1 && b==1 && c!=1) //11c
				cout<<2*c;
			else if(a!=1 && b==1 && c==1)//a11
				cout<<2*a;
			else//1b1
				cout<<a+b+c;	
		}	
	}
return 0;
}

