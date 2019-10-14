#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int insz,fsz,ld,t;

    while(scanf("%lld %lld",&insz,&ld)!=EOF)   {

        t=1;

        while(t<=ld)    {
            t=t+insz;
            insz++;
        }
        printf("%lld\n",insz-1);
    }
    return 0;
}
