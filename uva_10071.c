#include<stdio.h>
int main()
{
    int t,v,dis;

    while(scanf("%d%d",&v,&t)==2)   {
        if(((v>=-100)||(v<=100))&&((t>=0)||(t<=100)))  {
            dis=2*v*t;
            printf("%d\n",dis);
        }
    }
    return 0;
}
