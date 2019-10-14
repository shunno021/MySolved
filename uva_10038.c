#include<stdio.h>
#include<string.h>
int main()
{
    int n,a[2000],a2[2000],i,d,j,t,c;
    while(scanf("%d",&n)==1)  {
        for(i=0;i<n;i++)    {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)    {
            a2[i]=abs(a[i+1]-a[i]);
        }
        for(i=0;i<n-1;i++)    {
            for(j=n-1;j<i;j--) {
                if(a2[j]>a2[j+1])   {
                    t=a2[j];
                    a2[j]=a2[j+1];
                    a2[j+1]=t;
                }
            }
        }
        c=1;
        for(i=0;i<n-1;i++)    {
            if(a2[i+1]==a2[i])    {
                c=0;
                break;
            }
        }
        if(c==0)    printf("Not jolly\n");
        else printf("Jolly\n");
    }
    return 0;
}
