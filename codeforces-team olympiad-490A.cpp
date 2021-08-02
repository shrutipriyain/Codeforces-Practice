//codeforces-team olympiad-490A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int length(int ar[])
{
	return((sizeof(ar)/sizeof(int))+1);
}

int main()
{
	int n;
	cin>>n;
	vector <int> cp;
	vector <int> maths; 
	vector <int> pe;	
	int a=0;
	int b=0;
	int c=0;
	//a b and c stores the index of the elements
	int temp;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp==1)
		{
			cp.push_back(i+1);
			a++;
		}
		else if(temp==2)
		{
			maths.push_back(i+1);
			b++;
		}
		else
		{
			pe.push_back(i+1);
			c++;
		}
	}
	int minimum=min(cp.size(),maths.size());
	if(minimum>pe.size()) minimum=pe.size();
	cout<<minimum<<endl;
	if(minimum){
	for(int i=0;i<minimum;i++)
	cout<<cp[i]<<" "<<maths[i]<<" "<<pe[i]<<endl;}
return 0;
}

