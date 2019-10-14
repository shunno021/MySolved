#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    ///freopen("uva_10235.txt","r",stdin);

    long long int n,i,c,c1,sr,sr1,rev,m;

    while(scanf("%lld",&n)==1)    {

        sr=(long long int)sqrt(n);
        c=1;
        for(i=2;i<=sr;i++)  {
            if(n%i==0)  {
                c=0;
                break;
            }
        }
        m=n;
        rev=0;
        while(m)    {
            rev=(10*rev)+(m%10);
            m/=10;
        }
        sr1=(long long int)sqrt(rev);
        c1=1;
        for(i=2;i<=sr1;i++) {
            if(rev%i==0)    {
                c1=0;
                break;
            }
        }
        if(c==1&&c1==1) printf("%lld is emirp.\n",n);
        else if(c==1&&c1==0)    printf("%lld is prime.\n",n);
        else printf("%lld is not prime.\n",n);
    }
    return 0;
}
