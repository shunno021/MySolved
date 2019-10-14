#include<stdio.h>
int main()
{
    int n,i,j,m,a[102],s,t,av;
    s=1;
    while(scanf("%d",&n)==1&&n!=0)  {
        t=0;
        for(i=0;i<n;i++)    {
            scanf("%d",&a[i]);
            t=t+a[i];
        }
        av=t/n;
        m=0;
        for(i=0;i<n;i++)    {
            if(a[i]>av)    {
                m=m+(a[i]-av);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n",s,m);
        printf("\n");
        s++;
    }
    return 0;
}
