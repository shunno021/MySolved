#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)  {
        if(n<8&&n>-8) printf("Underflow!\n");
        else if(n==8||n==-8)   printf("40320\n");
        else if(n==9||n==-9)   printf("362880\n");
        else if(n==10||n==-10)  printf("3628800\n");
        else if(n==11||n==-11)  printf("39916800\n");
        else if(n==12||n==-12)  printf("479001600\n");
        else if(n==13||n==-13)  printf("6227020800\n");
        else if(n>13||n<-13)    printf("Overflow!\n");
    }
    return 0;
}
