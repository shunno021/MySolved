#include<stdio.h>
double ab(double a,double b);
int main()
{
    double h,m,a,b,an;
    while(scanf("%lf:%lf",&h,&m)==2)    {
        if(m==0&&h==0)  break;
        a=h*30+(m/2);
        b=m*6;
        an=ab(a,b);
        if(an>180)  an=360-an;
        printf("%.3lf\n",an);
    }
    return 0;
}

double ab(double a,double b)
{
    if(a>b) return a-b;
    else    return b-a;
}
