#include<stdio.h>
int main()
{
    int a,fr,f,i,j,k,l;
    while(scanf("%d%d",&a,&fr)==2&&a<=9)  {
        for(f=1;f<=fr;f++)  {
            for(i=1;i<=a;i++)   {
                for(j=1;j<=a;j++)   {
                    printf("%d",i);
                    if(j==i)    break;
                }
                printf("\n");
           }
            for(k=a-1;k>0;k--)  {
                for(l=1;l<=a-1;l++) {
                    printf("%d",k);
                    if(l==k)    break;
                }
                printf("\n");

            }
            printf("\n");
        }
    }
    return 0;
}
