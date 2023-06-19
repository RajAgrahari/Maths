//https://codeforces.com/contest/1836/problem/B
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
    while(t--)
    {
        ll n,k,g;
        cin>>n>>k>>g;
        ll temp = k*g;
        ll x;
        if((g%2) != 0)
        x = g/2;
        else
        x = (g/2)-1;

        if((n*x) >= temp)
        {
            cout<<temp<<'\n';
        }
        else
        {
            ll rem = ((temp-n*x)%g + x)%g;
            if(rem > x)
            {
                cout<<(n*x)-(x+g-rem)<<'\n';
            }
            else
            cout<<(n*x-x+rem)<<'\n';
        }
    }
    return 0;
}
