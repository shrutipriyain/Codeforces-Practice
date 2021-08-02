#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    long long n;
    cin>>n;
    long long first=0,second=0;
    string f="";
    string s="";
    long long t;
    while(n--)
    {
        
        cin>>t;
        if(t<0) 
        {
            
            second+=(-1*t);
            s+=to_string((-1*t));
        }
        else 
        {
            f+=to_string(t);
            first+=t;
        }
    }

    cout<<first<<' '<<second<<endl;
    cout<<f<<" "<<s<<endl;
    cout<<f.compare(s)<<endl;

   long long lastWin=(t>0)?1:2;
   cout<<"lastwin = "<<lastWin<<endl;
   if(first > second)
   {
       cout<<"first\n";
   }
   else if(first < second)
   {
       cout<<"second\n";
   }
   else
   {
       if(s.compare(f)>0) // s is lexicographically greater
        {
           cout<<"second\n";
        }
        else if(s.compare(f)<0) 
        {
            cout<<"first\n";
        }
        else
        {
            if(lastWin == 1)  cout<<"first\n";
            else              cout<<"second\n";
        }
   }

return 0;
}




