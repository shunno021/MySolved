#include<stdio.h>
int main()
{
    int yr;
    while(scanf("%d",&yr)!=EOF)  {
        if(((yr%4==0)&&(yr%100!=0))||(yr%400==0))
            printf("This is leap year.\n\n");
        else if((yr%15==0)||(((yr%4==0)&&(yr%100!=0))||(yr%400==0)))
            printf("This is leap year\
                   This is huluculu festival year.\n\n");
        else if((((yr%4==0)&&(yr%100!=0))||(yr%400==0))&&(yr%55==0))
            printf("This is bulukulu festival year.\n\n");
        else printf("This is leap year.\n\n");
    }
    return 0;
}
