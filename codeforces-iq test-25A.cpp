//codeforces-iq test-25A
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	int freq_even=0;
	int freq_odd=0;
	int last_even=0;
	int last_odd=0;
	for(int i=0;i<n;i++){
	cin>>ar[i];
	if(ar[i]%2==0) // if number is even
	{
		freq_even++;
		last_even=i+1;
	}
	else
	{
		freq_odd++;
		last_odd=i+1;
	}
}
if(freq_even<freq_odd)
	cout<<last_even;
else
cout<<last_odd;
	
return 0;
}

