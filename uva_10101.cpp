#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    unsigned long long int n;
    int k,l,h,s,i;
    i=1;

    while(cin>>n)   {
        printf("%d. ",i);
        k=n/10000000;
        if(k)   printf("%d kuti ",k);
        n=n%10000000;
        l=n/100000;
        if(l)   printf("%d lakh ",l);
        n=n% 100000;
        h=n/1000;
        if(h)   printf("%d hajar ",h);
        n=n%1000;
        s=n/100;
        if(s)   printf("%d shata ",s);
        n=n%100;
        if(n)   printf("%d ",n);

        printf("\n");
        i++;
    }
    return 0;
}
