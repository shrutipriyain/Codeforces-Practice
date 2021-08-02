#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)  
    {
        int t;
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    int k;
    cin>>k;
    // for(int i=0;i<n;i++)    cout<<v[i]<<" ";
    // cout<<"\n";
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        // cout<<"Lower bound "<<lower_bound(v.begin(),v.end(),l)- v.begin()<<endl;
        // cout<<"Upper bound "<<upper_bound(v.begin(),v.end(),r)-v.begin()<<endl;
        cout<<upper_bound(v.begin(),v.end(),r)-lower_bound(v.begin(),v.end(),l)<<"\n";
        
    }
    return 0;
}