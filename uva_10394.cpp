#include<bits/stdc++.h>
using namespace std;

#define N 20000000
#define Nth 100000

bool a[N];
int b[Nth];

void siv_structure()
{
    int l=sqrt(N*1.0)+1;

    a[0]=a[1]=1;

    for(int i=4;i<=N;i+=2)   {
        a[i]=1;
    }

    for(int i=3;i<=N;i+=2)  {
        if(!a[i])   {
            if(i<=l)    {
                for(int j=i*i;j<=N;j+=i*2)  {
                    a[j]=1;
                }
            }
        }
    }
}

void twn_prime()
{
    int j=1;

    for(int i=3;i<=N-2;i++)   {
        if((!a[i])&&(!a[i+2]))  {
            b[j++]=i;
        }
    }
}

int main()
{
    int n;

    siv_structure();
    twn_prime();

    while(scanf("%d",&n)!=EOF)  {
        printf("(%d,%d)\n",b[n],b[n]+2);
    }
    return 0;
}
