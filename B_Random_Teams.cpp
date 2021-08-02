#include <bits/stdc++.h>
using namespace std;
// Returns factorial of n
long long int fact(long long int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

//returns nCr
long long int nCr(long long int n, long long int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 

void solve()
{
    long long int n,m;
    cin>>n>>m;
    long long int max=nCr(n-m+1,2);
    long long int mini;
    // // if(n%m!=0)
    // mini=nCr((n/m),2)*(m-1) + nCr(((n/m)+(n%m)),2);
    // // else 
    // // mini=nCr((n/m),2)*m ;
    long long int div= n/m;
    long long int mod = n%m;
    long long int ans1 = mod* nCr(div+1,2);
    long long int ans2= (m-mod)*nCr(div,2);
    mini=ans1+ans2;
    cout<<mini<<" "<<max;
}
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
solve();

return 0;
}