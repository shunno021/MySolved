#include<stdio.h>
int main()
{
    int i,k,n,j,a[50],t,l,c;
    scanf("%d",&n);
    for(k=0;k<n;k++)    {
    scanf("%d",&l);
    for(i=0;i<l;i++)    {
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=0;i<l-1;i++)    {
        for(j=0;j<l-i-1;j++)    {
            if(a[j]>a[j+1]) {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                c++;
            }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",c);
}
    return 0;
}


