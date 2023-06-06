//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1109
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
const ll _max = 10000001;
vector<ll> primes(_max+1,1);
void Sieve(ll n)
{
	for (int p = 2; p*p <= n; p++)
	{
		if (primes[p] == 1)
		{
			for (int i = p * p; i <= n; i += p)
				primes[i] = 0;
		}
	}
}
void find(ll n)
{
        for(ll i=2;i<=n;i++)
        {
            if(primes[i] && primes[n-i])
            {
                cout<<i<<' '<<n-i<<'\n';
                return;
            }
        }
}
int main()
{
    NOOB CODER SOLUTION
    Sieve(_max);
    ll n;
    while(scanf("%ld",&n) == 1)
    {
        if(n<8)
        cout<<"Impossible.\n";
        else if(n%2)
        {
            cout<<2<<' '<<3<<' ';
            find(n-5);
        }
        else{
            cout<<2<<' '<<2<<' ';
            find(n-4);
        }
    }
    return 0;
}
