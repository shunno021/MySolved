#include<stdio.h>
int main()
{
    int n1,n2,d1,d2,r1,r2,r,i,c;
    while(scanf("%d%d",&n1,&n2)==2) {
        if(n1==0&&n2==0)
            break;
        c=0;
        r=0;
        d1=n1;
        d2=n2;
        for(i=1;i<=12;i++)  {
            r1=d1%10;
            r2=d2%10;
            if((r1+r2+r)>9) {
                c++;
                r=1;
            }
            else r=0;

            d1=d1/10;
            d2=d2/10;

            if(d1==0&&d2==0)
                break;
        }
        if(c==0)    printf("No carry operation.\n");
        else if(c==1)   printf("1 carry operation.\n");
        else    printf("%d carry operations.\n",c);
    }
    return 0;
}
