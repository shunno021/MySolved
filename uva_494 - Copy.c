#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,n;
    char a[200];
    while(gets(a))  {
        n=0;
        l=strlen(a);
        for(i=0;i<l;i++)    {
            if(((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))&&
               ((a[i+1]<'a'||a[i+1]>'z')&&(a[i+1]<'A'||a[i+1]>'Z')))    {
                n++;
               }
        }
        printf("%d\n",n);
    }
    return 0;
}
