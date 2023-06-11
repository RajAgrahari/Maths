//https://codeforces.com/contest/131/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define NOOB ios_base::sync_with_stdio(false);
#define CODER cin.tie(NULL);
#define SOLUTION cout.tie(NULL);
ll C[150][150];
int main()
{
    NOOB CODER SOLUTION
    int n, m, t;
  cin>>n>>m>>t;
  int j = 0 ;
  for(int i=0;i<40;i++)
    {
        C[i][0]=C[i][i]=1;
        for(j=1;j<i;j++)
        C[i][j]=C[i-1][j-1]+C[i-1][j];
    }
    ll ret=0;
        for(int i=1;i+4<=t;i++)
        {
            ret+=C[m][i]*C[n][t-i];
        }
        cout<<ret<<endl;
    return 0;
}
