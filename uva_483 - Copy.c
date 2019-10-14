#include<stdio.h>
int main()
{
    char a[10000];
    int i,j,l,k;
    while(gets(a))  {
        l=strlen(a);
        k=-1;
        for(i=0;i<l;i++)    {
            if(a[i]==' ') {
                for(j=i-1;j>k;j--)  {
                    printf("%c",a[j]);
                }
                printf(" ");
                k=i;
            }
        }
        for(j=l-1;j>k;j--)  {
            printf("%c",a[j]);
        }
        printf("\n");
    }

    return 0;

}
