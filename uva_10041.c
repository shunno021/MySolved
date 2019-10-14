#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,a[30000],d,fd,i,j;
    scanf("%d",&t);
    while(t--)  {
        scanf("%d",&n);
        for(i=0;i<n;i++)    {
            scanf("%d",&a[i]);
        }
        fd=999999999;
        for(i=0;i<n;i++)    {
            d=0;
            for(j=0;j<n;j++)    {
                d=d+abs(a[i]-a[j]);
            }
            if(d<fd)    {
                fd=d;
            }
        }
        printf("%d\n",fd);
    }
    return 0;
}
