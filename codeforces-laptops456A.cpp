//codeforces-laptops456A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int price[n];
	int quality[n];
	for(int i=0;i<n;i++)	
	{
		scanf("%d%d",&price[i],&quality[i]);
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(price[i]<price[j] && quality[i]>quality[j])
			{
				printf("Happy Alex");
				exit(0);
			}
}
}
	printf("Poor Alex" );

return 0;
}

