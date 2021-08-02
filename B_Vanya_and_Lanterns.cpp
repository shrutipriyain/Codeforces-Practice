#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    ll l;
    cin>>l;
    ll ar[n];
    for(int i=0;i<n;i++)    cin>>ar[i];
    sort(ar,ar+n); //O(nlogn)
    double maximum=-1;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i+1]-ar[i]> maximum) maximum=ar[i+1]-ar[i];
    }
    //we need to consider the boundary cases as well, so check for the 
    //left and right most distances, and see the maximum of them
    double bounds= max(ar[0], l-ar[n-1]);
    double result = max(maximum/2, bounds);
    printf("%.10f\n",result); // as asked for 10 digits( 10^-9)
    // cout<<max(maximum/2, bounds);
}

int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}