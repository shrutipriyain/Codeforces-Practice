//greg workout-255A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	int chest=0;
	int bicep=0;
	int back=0;
	for(int i=0;i<n;i++)		cin>>ar[i];
	for(int i=0;i<n;i++)	{
		if(i%3==0)
			chest+=ar[i];
		else if(i%3==1)
			bicep+=ar[i];
		else if(i%3==2)
			back+=ar[i];
		}
	if(chest>back && chest>bicep)	cout<<"chest";
	if(back>chest && back>bicep) 	cout<<"back";
	if(bicep>chest && bicep>back)	cout<<"biceps";

return 0;
}

