#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,r;
    while(scanf("%lld",&n)==1&&n)    {
        r=sqrt(n);
        if((r*r)==n)    printf("yes\n");
        else    printf("no\n");
    }
    return 0;
}
