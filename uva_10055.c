#include<stdio.h>
int main()
{
    long long int hs,op;
    while(scanf("%lld%lld",&hs,&op)!=EOF) {
        if(hs>op)   printf("%lld\n",hs-op);
        else    printf("%lld\n",op-hs);
    }
    return 0;
}
