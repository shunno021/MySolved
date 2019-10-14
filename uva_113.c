#include<stdio.h>
int main()
{
   double i,p,n;
    while(scanf("%lf",&i)==1)  {
        scanf("%lf",&n);
        p=pow(n,(1/i));
        printf("%.0lf\n",p);
    }
    return 0;
}
