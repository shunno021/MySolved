#include<bits/stdc++.h>
using namespace std;

int prm[10000],nprm,mrk[100000];

void siv(int n)
{
    int lmt=sqrt(n*1.0)+2;
    nprm=0;
    mrk[1]=1;
    mrk[2]=0;
    prm[nprm++]=2;
    for(int i=2;i<=n;i+=2)  mrk[i]=1;

    for(int i=3;i<=n;i++)   {
        if(!mrk[i]) {
            prm[nprm++]=i;
            if(i<lmt)   {
                for(int j=i*i;j<=n;j+=i*2)  {
                    mrk[j]=1;
                }
            }
        }
    }
}

int main()
{
    int n;

    while(scanf("%d",&n)==1&&n) {
        siv(n);
        int mx=1,n1,n2;
        for(int i=0;i<nprm;i++) {
            for(int j=0;j<nprm;j++) {
               if(prm[j]+prm[i]==n) {
                    int d=prm[j]-prm[i];
                    if(d<mx)    {
                    mx=d;
                    n1=prm[i];
                    n2=prm[j];
                }
               }
            }
        }
        printf("%d = %d + %d\n",n,n2,n1);
    }

    return 0;
}

