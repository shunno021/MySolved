#include<stdio.h>
#include<math.h>
int aa(int k);
int iv(int k);
int r;
int main()
{
    int n,m;

    while(scanf("%d",&n)==1)  {
        if((aa(n)==1)&&(aa(iv(n))==0))
            printf("%d is prime.\n",n);
        else if(aa(iv(n))==1&&aa(n)==1)
            printf("%d is emirp.\n",n);
        else if(aa(n)==0)
            printf("%d is not prime.\n",n);
    }

    return 0;
}

int aa(int k)
{
    int i;
    int j=sqrt(k);
    for(i=2;i<=j;i++)   {
        if(k%i==0)
            return 0;
    }
    return 1;
}
int iv(int k)
{
    int r=0;

    while(k)    {
       r=r*10+k%10;
       k=k/10;
    }
    return r;
}
