#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unordered_map<int,int> colors;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            colors[a]++;
            //out<<"hash key: "<<a<<" and freq "<<colors[a]<<endl;
        }
        int max=-9999;
        for(auto it:colors)
        {
            if(it.second>max)   max=it.second;
        }
        cout<<max<<endl;
        //cout<<"Test case ended\n";
    }
    return 0;
}