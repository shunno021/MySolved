#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,la,lb;
    char a[50000],b[50000];
    while(scanf("%s %s",a,b)!=EOF)  {
        la=strlen(a);
        lb=strlen(b);
        l=0;
        for(i=0;i<la;i++)  {
            for(j=0;j<lb;j++)   {
                if(a[i]==b[j])  {
                    l++;
                 }   i++;
            }
            j=j;
        }
        if(la==l)   printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
