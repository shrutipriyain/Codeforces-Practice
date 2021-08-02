//counterExample-483A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long l,r;
	cin>>l>>r;
	if (r - l + 1 < 3) //if only 2 numbers lie between them, then not possible
	{ 
	 	cout << -1 << endl;
	 	return 0;
	}
 
	if (l % 2 == 0) // if even( since all consecutive numbers are coprime but even numbers are not
	 {
	 	cout << l << ' ' << l + 1 << ' ' << l + 2 << endl;
	 	return 0;
	}
 
	if (r - l + 1 > 3) // if odd, then add 1 to make it even and then 3 consecutive numbers
	{
		
	 	cout << l + 1 << ' ' << l + 2 << ' ' << l + 3 << endl;
	 	return 0;
	}
 
	cout << -1 << endl;
	return 0;
}
