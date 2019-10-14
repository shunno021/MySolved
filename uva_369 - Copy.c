#include<stdio.h>
int main()
{
    int i,n,m,n_m;
    double c,fn,fm,fnsm;
    while(scanf("%d %d",&n,&m)==2&&(m!=0&&n!=0))    {
        n_m=n-m;
        fn=1;
        for(i=1;i<=n;i++)   {
            fn=fn*i;
            if(i==m)    {
                fm=fn;
            }
            if(i==n_m)    {
                fnsm=fn;
            }
        }
        c=fn/(fnsm*fm);
        printf("%d things taken %d at a time is %.0lf exactly.\n",n,m,c);
    }
    return 0;
}
