//https://codeforces.com/contest/71/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);

vector<ll> countTotalFactors(ll n)
{
    vector<ll> ans;
    for(int i=1;i<=sqrt(n);i++)
    {
        if((n%i)==0)
        {
            if((n/i)==i)
            ans.push_back(i);
            else
            {
                ans.push_back(i);
                ans.push_back(n/i);
            }
        }
    }
    return ans;
}
void countTotalPrimeFactors(ll n,vector<ll>& ans)
{
    ll cnt=0;
     while (n % 2 == 0)
    {
        cnt++;
        if(cnt==2)
        {
           ans.push_back(4);
        }
        n = n/2;
    }
    
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        bool f=true;
        while (n % i == 0)
        {
            if(f)
            {
               ans.push_back(i);
               f=false;
            }
            n = n/i;
        }
    }

    if (n > 2)
    ans.push_back(n);
}
int main()
{
    NOOB CODER SOLUTION
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
        vector<ll> ans;
        countTotalPrimeFactors(n,ans);

        for(ll i=0;i<ans.size();i++)
        {
            ll x = (n/ans[i]);
            for(ll j=0;j<x;j++)
            {
                bool f=true;
                for(ll k=j;k<n;k+=x)
                {
                    if(a[k]==0)
                    {
                        f=false;
                        break;
                    }
                }
                if(f)
                {
                    cout<<"YES\n";
                    return 0;
                }
            }       
        }
        cout<<"NO\n";
    return 0;
}
