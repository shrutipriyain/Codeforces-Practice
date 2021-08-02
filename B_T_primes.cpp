#include <bits/stdc++.h>
using namespace std;
const long long int n=1e6+1;
bool prime[n+1];
vector<unsigned long long> primeArray; // contains all squares of prime numbers 

void SieveOfEratosthenes()
{
    // Create a boolean array "prime[0..n]" and initialize  all entries it as true.
    // A value in prime[i] will finally be false if i is Not a prime, else true.
    
    memset(prime, true, sizeof(prime));
    //memset is used to set the values

    for (unsigned long long int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or equal to the square of it
            // numbers which are multiple of p and are less than p^2 are already 
            // been marked.
            for (unsigned long long int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    //copying values in a vector:
    for(unsigned long long int i=0;i<=n;i++) 
    {
        if(prime[i]) primeArray.push_back(i*i);
    }
}

void solve()
{
    int n;
    cin>>n;
    while(n--)
    {
        unsigned long long int k;
        cin>>k;
        if (binary_search(primeArray.begin(), primeArray.end(), k)==false || k < 4) 
        cout<<"NO\n";
        else cout<<"YES\n";
    }
}

int main()
{
ios:ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
SieveOfEratosthenes(); //pre-computing the values
solve();
return 0;
}


// The above solutions has many times an Overflow.
//hence consider the following better solution:
/*
#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
    int skip=0;
    if(n<2)
        return false;
    else if(n==2)
        return true;
    long long limit=sqrt(n);
    if(n%2==0)
        return false;
        for(int j=3; j<=limit; j+=2){
            if(n%j==0)
                return false;
            }
    return true;
}
int main()
{
    long long num;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>num;
        long long sqr=sqrt(num);
        if(sqr*sqr==num&&isPrime(sqr)==true)   // we just check whether it is a perfect square and is a prime
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}

*/