#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll bigmod(ll b,ll p,ll m)
{
    ///b^p%m;

    if(p==0)    return 1%m;
    int x=bigmod(b,p/2,m);
    x=(x*x)%m;
    if(p%2==1)  x=(b*x)%m;

    return x;
}


int main()
{
    ll b,p,m;

    while(scanf("%lld %lld %lld",&b,&p,&m)!=EOF)    {

        cout<<bigmod(b,p,m)<<endl;
    }
    return 0;
}
