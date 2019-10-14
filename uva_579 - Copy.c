#include<stdio.h>
double ab(double a,double b);

int main()
{
    double h,m,a,b,agl;
    while(scanf("%lf:%lf",&h,&m)==2&&!(h==0&&m==0))    {
        a=(h*30)+(m/2);
        b=m*6;
        agl=ab(a,b);
        if(agl>180) {
            agl=360-agl;
        }
        printf("%.3lf\n",agl);
    }
    return 0;
}

double ab(double a,double b)
{
    if(a-b>0)   return a-b;
    else    return b-a;
}
