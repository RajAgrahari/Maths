//https://codeforces.com/contest/371/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
ll power2(ll n)
{
    ll cnt=0;
    while((n%2) == 0)
    {
        cnt++;
        n = n/2;
    }
    return cnt;
}
ll power3(ll n)
{
    ll cnt=0;
    while((n%3) == 0)
    {
        cnt++;
        n = n/3;
    }
    return cnt;
}
ll power5(ll n)
{
    ll cnt=0;
    while((n%5) == 0)
    {
        cnt++;
        n = n/5;
    }
    return cnt;
}
int main()
{
    NOOB CODER SOLUTION
    ll n,m;
    cin>>n>>m;
    ll p21 = power2(n);
    n = n/pow(2,p21);
    ll p22 = power2(m);
    m = m/pow(2,p22);
    ll p31 = power3(n);
    n = n/pow(3,p31);
    ll p32 = power3(m);
    m = m/pow(3,p32);
    ll p51 = power5(n);
    n = n/pow(5,p51);
    ll p52 = power5(m);
    m = m/pow(5,p52);
    if(n!=m)
    cout<<-1<<'\n';
    else
    cout<<abs(p21-p22)+abs(p31-p32)+abs(p51-p52)<<'\n';
   
    return 0;
}
