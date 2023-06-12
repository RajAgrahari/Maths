//https://codeforces.com/contest/88/problem/C
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
    ll a,b;
    cin>>a>>b;
    ll lcm = (a*b)/__gcd(a,b);
    ll time=1,c1=0,c2=0;
    c1 = (lcm/a)-1;
    c2 = (lcm/b)-1;
    if(c1>c2)
    c2++;
    else
    c1++;
    
    if(c1>c2)
    cout<<"Dasha\n";
    else if(c1<c2)
    cout<<"Masha\n";
    else
    cout<<"Equal\n";
    return 0;
}
