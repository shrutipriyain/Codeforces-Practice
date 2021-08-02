//accepted :))
#include <bits/stdc++.h>
using namespace std;

bool areBracketsBalanced(string expr) 
{   
    stack<char> s; 
    char x; 
  
    // Traversing the Expression 
    for (int i = 0; i < expr.length(); i++)  
    { 
        if (expr[i] == '(')  
        { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
            return false; 
  
        switch (expr[i]) { 
        case ')': 
              
            // Store the top element in a 
            x = s.top(); 
            s.pop(); 
            if (x == '{' || x == '[') 
                return false; 
            break; 
        } 
    } 
    // Check Empty Stack 
    return (s.empty()); 
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
    string s;
    cin>>s;
    int ca=0,cb=0,cc=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A') ca++;
        else if(s[i]=='B') cb++;
        else cc++;
    }
    char maxi;
    if(ca >= cb && ca>= cc) maxi='A';
    else if(cb >= cc && cb >=ca) maxi='B';
    else maxi='C';
    if(s[0]==maxi) {
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==maxi) s[i]='(';
        else s[i]=')';
    }
    }
    else 
    {
        for(int i=0;i<s.length();i++)
    {
        if(s[i]==maxi) s[i]=')';
        else s[i]='(';
    }
    }
    //cout<<"String is: "<<s<<endl;
    if(areBracketsBalanced(s)) cout<<"YES\n";
    else cout<<"NO\n";
}
return 0;
}