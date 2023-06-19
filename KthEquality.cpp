//https://codeforces.com/contest/1836/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
ll power(ll a, ll e) {
    if (e == 0) return 1;
    return e == 1 ? a : a * power(a, e-1);
}
int main()
{
    NOOB CODER SOLUTION
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll k;
        cin>>k;
        ll A[2],B[2],C[2];
        A[0] = power(10,a-1),A[1] = power(10,a)-1;
        B[0] = power(10,b-1),B[1] = power(10,b)-1;
        C[0] = power(10,c-1),C[1] = power(10,c)-1;
        if((A[0]+B[0] > C[1]) || (A[1]+B[1] < C[0]))
        {
            cout<<"-1\n";
            continue;
        }
        ll a_,b_,c_;
        bool f = false;
        for(ll i = A[0];i<=A[1];i++)
        {
            ll mi = C[0]-i,mx = C[1]-i;
            mi = max(mi,B[0]);
            mx = min(mx,B[1]);
            if(mx < mi)
            continue;
            ll x = mx-mi+1;
            if(k <= x)
            {
                f=true;
                a_ = i;
                b_ = mi+k-1;
                c_  = a_+b_;
                break;
            }
            k -= x;

        }
        if(f)
        cout<<a_<<" + "<<b_<<" = "<<c_<<'\n';
        else
        cout<<"-1\n";
    }
    return 0;
}
