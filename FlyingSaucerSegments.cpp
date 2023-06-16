//https://codeforces.com/contest/227/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
ll power(ll n,ll r,ll m)
{
    if(r==0)
    return 1;
    ll ans = power(n,r/2,m);
    ans = (ans*ans)%m;
    if(r&1)
    return (ans*n)%m;
    return ans;
}
int main()
{
    NOOB CODER SOLUTION
        ll n,m;
        cin>>n>>m;
        cout<<(power(3,n,m)-1+m)%m<<'\n';
    return 0;
}
