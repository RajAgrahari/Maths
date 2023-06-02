//https://codeforces.com/contest/515/problem/C
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
        ll a;
        cin>>a;
       
        vector<ll> ans;
        while(a>0)
        {
            ll temp = (a%10);
            if(temp!=1 && temp!=0)
            {
                if(temp==4)
                {
                    ans.push_back(3);
                    ans.push_back(2);
                    ans.push_back(2);
                }
                else if(temp==6)
                {
                    ans.push_back(3);
                    ans.push_back(5);
                }
                else if(temp==8)
                {
                    ans.push_back(7);
                    ans.push_back(2);
                    ans.push_back(2);
                    ans.push_back(2);
                }
                else if(temp==9)
                {
                    ans.push_back(7);
                    ans.push_back(3);
                    ans.push_back(3);
                    ans.push_back(2);
                }
                else{
                    ans.push_back(temp);
                }
            }
            a = a/10;
        }
        sort(ans.rbegin(),ans.rend());
        for(ll x:ans)
        cout<<x;
        cout<<'\n';
    return 0;
}
