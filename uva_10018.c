#include<stdio.h>
long int rev(long int n);
int main()
{
    long int t,n,n1,s,i,m;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)   {
        scanf("%ld",&n);
        m=0;
        do  {
            n1=rev(n);
            if(n==n1)   break;
            s=n+n1;
            m++;
            n=s;
        }while(m<=1000&&n1<=4294967295);
        printf("%ld %ld\n",m,n1);
    }
    return 0;
}
long int rev(long int n)
{
    long int t,s,r;
    t=n;
    s=0;
    while(t)    {
        r=t%10;
        s=s*10+r;
        t=t/10;
    }
    return s;
}
