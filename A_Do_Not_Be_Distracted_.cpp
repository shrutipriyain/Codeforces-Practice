#include <bits/stdc++.h>
using namespace std;
string s;

bool checkForInBetween(int low,int high)
{
    char ch=s[low];
    for(int i=low;i<=high;i++)
    {
        if(s[i]!=ch)  return false;
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    cin>>s;
    // unordered_set<char> Alphabet;
    for(int i=0;i<n;i++)
    {
        // Alphabet.insert(s[i]);
        int low=s.find(s[i]);
        int high=s.find_last_of(s[i]);
        //cout<<s[i]<<" low: "<<low<<" high: "<<high<<endl;
        if(checkForInBetween(low,high)==false) 
        {
            cout<<"NO\n";return;
        }
    }
    cout<<"YES\n";
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
    solve();
}
return 0;
}