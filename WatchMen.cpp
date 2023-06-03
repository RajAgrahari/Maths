//https://codeforces.com/contest/651/problem/C
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
    unordered_map<ll,ll> mp1,mp2;
    map<pair<ll,ll>,ll> mp3;
    ll ans=0;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ans += (mp1[a]++) + (mp2[b]++) - (mp3[{a,b}]++);

    }
    cout<<ans<<'\n';
    return 0;
}
