#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    ///freopen("uva_495.txt","r",stdin);


    long long int m,n1,n2,i,n;

    while(scanf("%lld",&m)==1)    {
        n=0;
        n1=0;
        n2=1;
        i=1;
        while(i!=m) {
            n=n1+n2;
            n1=n2;
            n2=n;
            i++;
        }
        printf("The Fibonacci number for %lld is %lld\n",m,n);
    }
    return 0;
}
