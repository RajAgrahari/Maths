//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1335
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
const int _max = 20000001;
int primes[_max];
void Sieve(int n)
{
	vector<bool> prime(n + 1, true);
	for (int p = 2; p*p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
	int j = 0;
	for (int p = 2; p+2<= n; p++)
		if (prime[p] && prime[p+2])
			primes[j++] = p;
}

int main()
{
   NOOB CODER SOLUTION
   Sieve(_max);
	int s;
	while (scanf("%d\n", &s) == 1)
	{
		cout << '(' << primes[s - 1] << ", " << primes[s-1]+2<< ")\n";
	}
	// system("PAUSE");
    return 0;
}
