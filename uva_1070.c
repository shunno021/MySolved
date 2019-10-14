#include<stdio.h>
int main()
{
   long long int i;
    while(scanf("%lld",&i)!=EOF)  {

    if((i%400==0)||((i%4==0)&&(i%100!=0))) printf("This is leap year.\n");
    else if(i%15==0)    printf("This is huluculu festival year.\n");
    else if(i%55==0)    printf("This is bulukulu festival year.\n");
    else printf("This is an ordinary year.\n");
    }

    return 0;


}
