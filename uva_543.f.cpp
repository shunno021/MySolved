#include<bits/stdc++.h>

using namespace std;

#define N (int)1e6

bool a[N];


void siv()
{
    int l=sqrt(N*1.0)+1;

    a[0]=a[1]=1;
    for(int i=4;i<=N;i+=2)   a[i]=1;

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


int main()
{

    freopen("uva_543in.txt","r",stdin);
    freopen("uva_543out.txt","w",stdout);

    int n,x,y,df,flg;

    siv();

    while(scanf("%d",&n)==1&& n)    {
        flg=0;

        for(int i=3;i<=N;i+=2)   {
            if(!a[i])   {
                df=abs(n-i);
                if(!a[df])  {
                    a[i]<a[df]?x=i,y=df:x=df,y=i;
                    flg=1;
                    break;
                }
            }
        }
        if(flg==1)  {
            printf("%d = %d + %d\n",n,y,x);
        }
        else printf("Goldbach's conjecture is wrong.\n");
    }

    return 0;
}
