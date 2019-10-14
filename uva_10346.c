#include<stdio.h>
int main()
{
    int n,m,r,t,T;
    while(scanf("%d%d",&n,&m)!=EOF) {
         t=0;
         T=n;
         while(n>=m) {
            t=n/m;
            r=n%m;
            T=T+t;
            n=t+r;
         }
         printf("%d\n",T);
    }
    return 0;
}
