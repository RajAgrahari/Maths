//https://codeforces.com/contest/304/problem/C
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
        ll n;
        cin>>n;
        if(n&1)
        {
            ll c[n];
            for(ll i=0;i<n;i++)
            {
                c[i] = (i+i)%n;
                cout<<i<<' ';
            }
            cout<<'\n';
            for(ll i=0;i<n;i++)
            {
                cout<<i<<' ';
            }
            cout<<'\n';
            for(ll i=0;i<n;i++)
            cout<<c[i]<<' ';
            cout<<'\n';

        }
        else
        cout<<-1<<endl;
    return 0;
}
