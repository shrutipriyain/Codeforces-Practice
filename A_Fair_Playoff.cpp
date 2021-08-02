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
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    int i, first, second; 
    first = second = INT_MIN;
    for(i = 0; i < 4; i++)
    {
       if (a[i] > first)
       {
           second = first;
           first = a[i];
       }
       else if (a[i] > second && a[i] != first)
       {
           second = a[i];
       }
    }
    int win1  = max(a[0], a[1]);
    int win2  = max(a[2], a[3]);

    if( (win1==first and win2==second) || (win1==second && win2==first) )
        cout<<"YES\n";
    else 
        cout<<"NO\n";

}
return 0;
}