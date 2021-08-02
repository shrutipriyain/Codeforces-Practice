    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    ios:ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int count=0;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];


    int i=0,j=0;
    int solved = 0;
    while(i<n && j<m)
    {
        if( a[i] <=b[j])
        {
            solved++;
            i++;
            j++;
        }
        else
        {
            while(a[i] > b[j] && j<m) j++;
        }
    }

    cout<<(n-solved)<<endl;


    return 0;
    }