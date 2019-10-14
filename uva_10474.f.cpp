#include<bits/stdc++.h>
using namespace std;

int a[100000];

int b_search(int lo,int hi,int q)
{
    int mid,bst=0;

    while(lo<=hi)   {

        mid=(lo+hi)/2;

        if(q<=a[mid])   {
            if(a[mid]==q)   {
                bst=mid+1;
            }
            hi=mid-1;
        }
        else lo=mid+1;
    }
    return bst;
}


int main()
{

    freopen("uva_10474in.txt","r",stdin);
    freopen("uva_10474out.txt","w",stdout);


    int N,Q,b[100000],c=1,p;

    while(scanf("%d %d",&N,&Q)==2 && (N&&Q))    {

        for(int i=0;i<N;i++)    {
            scanf("%d",&a[i]);
        }

        for(int j=0;j<Q;j++)    {
            scanf("%d",&b[j]);
        }

        sort(a,a+N);

         printf("CASE# %d:\n",c++);

        for(int i=0;i<Q;i++)    {

            p=b_search(0,N-1,b[i]);
            if(p>0)   {
               printf("%d found at %d\n",b[i],p);
            }
            else    printf("%d not found\n",b[i]);

        }
    }
    return 0;
}
