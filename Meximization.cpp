#include <bits/stdc++.h>
using namespace std;

void shift(int ar[],int n,int pivot)
{
    int save=ar[pivot];
    for(int i=pivot;i<n-1;i++)
    {
        ar[i]=ar[i+1];
    }
    ar[n-1]=save;
}

void solution(int ar[],int n)
{
    sort(ar,ar+n);
    for(int i=0;i<n-1;i++)
    {
        if(ar[i] == ar[i+1])
        shift(ar,n,i+1);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    solution(ar,n);
}
return 0;
}