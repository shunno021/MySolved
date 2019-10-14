#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n1,n2,m1,m2,c,cf,r1,r2,r3;

    while(scanf("%d %d",&n1,&n2)==2&&(n1||n2))  {
        m1=n1;
        m2=n2;
        cf=0;
        c=0;
        while(1)    {
            if(m1==0||m2==0)    break;

            r1=m1%10;
            r2=m2%10;
            r3=r1+r2+c;

            if(r3>9)    {
                c=1;
                cf++;
            }
            else c=0;

            m1/=10;
            m2/=10;
        }
        if(cf==0)   printf("No carry operation.\n");
        else if(cf==1)  printf("1 carry operation.\n");
        else printf("%d carry operations\n",cf);
    }
    return 0;
}
