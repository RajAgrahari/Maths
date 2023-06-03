//https://codeforces.com/problemset/problem/1423/K
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
int main()
{
    NOOB CODER SOLUTION
    ll t;
    cin>>t;
    vector<ll> pre(1000001,0);
    ll cnt=0;
    vector<bool> prime(1000001,true);
    prime[0] = prime[1] = false;
    for(ll i=2;i<=1000001;i++)
    {
        if(prime[i])
        {
            cnt++;
            for(ll j=i*i;j<=1000001;j+=i)
            prime[j] = false;
        }
        pre[i] = cnt;
    }

    while(t--)
    {
        ll n;
        cin>>n;
        ll sq = sqrt(n);
        cout<<pre[n]-pre[sq]+1<<'\n';
    }
    return 0;
}
