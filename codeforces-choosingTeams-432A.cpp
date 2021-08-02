//codeforces-choosingTeams-432A
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,k;
cin>>n>>k;
int ar[n];
int sum=0;
for(int i=0;i<n;i++)  {

 cin>>ar[i];
 if(ar[i]<=5-k)
 	sum++;
}
cout<<sum/3;
return 0;
}


