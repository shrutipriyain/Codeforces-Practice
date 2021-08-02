//nope
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--)
{
    int n, u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    if(u==n && r==n && d==n && l==n) cout<<"YES\n";
    else if(u==0 && r==0 && d==0 && l==0) cout<<"YES\n"; 
    else
    {
       int mat[n][n]={0};
       for(int i=1;i<=u;i++)
       {
           mat[0][i]=1;
       }
       for(int i=1;i<=r;i++)
       {
           mat[i][n-1]=1;
       }
       for(int i=1;i<=d;i++)
       {
           mat[n-1][i]=1;
       }
       for(int i=1;i<=l;i++)
       {
           mat[i][0]=1;
       }
       int sumu=0,sumr=0,sumd=0,suml=0;
       cout<<"\nprinting matrix\n";
       for(int i=0;i<n;i++)
       {
           for(int i=0;i<n;i++)
           {
               cout<<mat[i][i]<<" ";
           }
           cout<<"\n";
       }
       for(int i=0;i<n;i++)
       {
            if( mat[0][i]==1) sumu++;
            if( mat[i][n-1]==1) sumr++;
            if( mat[n-1][i]==1) sumd++;
            if( mat[i][0]==1) suml++;
       }
       if(sumu==u && sumd==d && suml==l && sumr==r) cout<<"YES\n";
       else cout<<"NO\n";
    }
}
return 0;
}