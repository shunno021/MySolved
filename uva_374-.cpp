
#include<bits/stdc++.h>
#define ll long long

using namespace std;


ll BigMod(ll a,ll b,ll M)
{
    if(b==0)    return 1% M;
    ll x=BigMod(a,b/2,M);
    x=(x*x) % M;
    if(b%2==1)  {
        x=(x*a)% M;
    }
    return x;
}


int main()
{
    ll b,p,m;

    while(scanf("%lld%lld%lld",&b,&p,&m)!=EOF)    {
        ll x=BigMod(b,p,m);
        cout<<x<<endl;
    }
    return 0;
}
