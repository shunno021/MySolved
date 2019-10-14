#include<stdio.h>
int main()
{
    char n;
    while(scanf("%c",&n)!=EOF)  {
        if(n=='=')  printf("-");
        else if(n=='-') printf("0");
    }
}
