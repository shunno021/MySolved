#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int r,n;
    float a;

    while(scanf("%d %d",&r,&n)!=EOF)    {

        a=((n*r*r)/2)*sin(2*3.141593/n);

        printf("%0.3f\n",a);
    }
    return 0;
}
