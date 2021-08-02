#include <iostream>
#include <cstdio>
using namespace std;
int arr[100002],n,now,ans,s,t;
int main()
{
    scanf("%d%d%d",&n,&s,&t);
    for (int i=1; i<n+1; i++) scanf("%d",&arr[i]);
    if (s == t) {cout << 0; return 0;}
    now = arr[s];
    //cout<<"now = "<<now<<endl;
    while ((now != s) && (now != t)) {
        ans++;
        now = arr[now];
    //cout<<"now = "<<now<<endl;

    }
    cout << ((now == t)?ans+1:-1);
}






