#include<stdio.h>
int main()
{
    int t,f,lnd,a,env,i;
    long long int sum;
    scanf("%d",&t);
    while(t--)  {
        scanf("%d",&f);
        sum=0;
        for(i=1;i<=f;i++)   {
            scanf("%d%d%d",&lnd,&a,&env);
            sum=sum+(lnd*env);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
