#include<stdio.h>
int main()
{
    int t,n,i,j,k,a[1000],sm,m;
    double av,tp;
    scanf("%d",&t);
    while(t--)  {
        scanf("%d",&n);
        sm=0;
        for(i=0;i<n;i++)    {
            scanf("%d",&a[i]);
            sm=sm+a[i];
        }
        av=(double)sm/(double)n;
        m=0;
        for(i=0;i<n;i++)    {
            if(a[i]>av) {
                m++;
            }
        }
        tp=(double)(m*100)/(double)n;
        printf("%.3lf%%\n",tp);
    }
    return 0;
}
