#include<stdio.h>
int main()
{
    long long int n,fn;
    while(scanf("%lld",&n)==1&&n>=0&&n<=210000000)    {
        fn=(n*(n+1)/2)+1;
        printf("%lld\n",fn);
    }
    return 0;
}
