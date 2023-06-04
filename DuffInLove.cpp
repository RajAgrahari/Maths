//https://codeforces.com/contest/588/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);

vector<ll> countTotalPrimeFactors(ll n)
{
    vector<ll> v;
    bool f=true;
    while(n % 2 == 0)
    {
        if(f)
        {
            v.push_back(2);
            f = false;
        }
        n = n/2;
    }
 
   
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        f=true;
        while (n % i == 0)
        {
            if(f)
            {
                v.push_back(i);
                f = false;
            }
            n = n/i;
        }
    }
 
    
    if (n > 2)
    v.push_back(n);
    return v;
}
int main()
{
NOOB CODER SOLUTION
  
        ll n;
        cin>>n;
        vector<ll> v;
        v = countTotalPrimeFactors(n);
        ll ans=1;
        for(ll x:v)
        ans *= x;
        cout<<ans<<'\n';
    return 0;
}
