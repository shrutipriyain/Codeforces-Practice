//helpful maths
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int ar[51]={0};int j=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='1')
		{
			ar[j]=1;
			j++;
		}
		else if(str[i]=='2')
		{ar[j]=2;
			j++;}
				else if(str[i]=='3')
		{ar[j]=3;
			j++;}
	}
		//counting the number of elements in the array
		int len=0;
		for(int i=0;i<51;i++)
		{ if(ar[i]!=0) len++;}
	//bubble sort the elements
	int temp;
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	//printing the elements
	for(int i=0;i<len;i++)
	{
		if(i==len-1)
		cout<<ar[i];
		else 
		cout<<ar[i]<<"+";
	}

	
return 0;
}

