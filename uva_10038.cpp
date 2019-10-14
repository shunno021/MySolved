#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[3000];
    while(scanf("%d",&n)!=EOF)  {
    for(int i=0;i<n;i++)    {
        scanf("%d",&a[i]);
    }
    ///sort(a,a+n);
    int d1,d2,check=1;
    d1=abs(a[1]-a[0]);
    d2=abs(a[2]-a[1]);
    for(int i=3;i<n;i++)    {
        if(abs(d2-d1)!=1)    {
            check=0;
            break;
        }
        else    {
            d1=abs(a[i]-a[i-1]);
            d2=abs(a[i+1]-a[i]);
        }
    }
    if(check==0)    printf("Not jolly\n");
    if(check==1)    printf("Jolly\n");
    }

    return 0;
}
