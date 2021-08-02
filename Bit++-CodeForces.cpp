/*ou're given a programme in language Bit++. The initial value of x is 0. Execute the programme and find its final value 
(the value of the variable when this programme is executed).

Input
The first line contains a single integer n (1?=?n?=?150) — the number of statements in the programme.

Next n lines contain a statement each. Each statement contains exactly one operation (++ or --) and exactly one variable x
 (denoted as letter «X»). Thus, there are no empty statements. The operation and the variable can be written in any order.

Output
Print a single integer — the final value of x.*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x=0;
	string str;//imp to use this coz char str[3] didnt work
	for(int i=0;i<n;i++)
	{
		cin>>str;
		
		if(str=="X++" || str=="++X")
			x=x+1;
	
		else if(str=="--X" || str=="X--")
			x=x-1;
			
	}
	cout<<x;
	
return 0;
}

