#include<bits/stdc++.h>

using namespace std;

int a[10002];
int b[10002];

int bs(int h,int s)
{
    int l,m;
    l=0;
    while(l<=h) {
        m=(l+h)/2;
        if(a[m]==s) {
            return m;
        }

        else if(a[m]>s) h=m-1;

        else l=m+1;
    }
    return 0;

}


int main()
{
    freopen("uva_10474.txt","r",stdin);
    freopen("uva_10474o.txt","w",stdout);

    int n,q,j;
    j=1;
    while(scanf("%d %d",&n,&q)==2&&(n||q)) {

        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<q;i++) {
            scanf("%d",&b[i]);
        }
    sort(a,a+n);

    int c;
    printf("CASE# %d:\n",j++);

    for(int i=0;i<q;i++)    {
    c=bs(n,b[i]);

    if(c>0) printf("%d found at %d\n",b[i],c+1);
    else printf("%d not found\n",b[i]);
    }

    }

    return 0;
}
