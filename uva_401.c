#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,p,l,m;
    char a[90];
    while(scanf("%s",&a)!=EOF)   {
        l=strlen(a);
        p=m=0;
        for(i=0;i<l;i++)    {
            if(a[i]==a[l-i-1])  {
                p++;
            }
        }
        for(i=0;i<l;i++)    {
            if(((a[i]=='A')&&(a[l-i-1])=='A')||
               ((a[i]=='E')&&(a[l-i-1])=='3')||
               ((a[i]=='3')&&(a[l-i-1])=='E')||
               ((a[i]=='H')&&(a[l-i-1])=='H')||
               ((a[i]=='I')&&(a[l-i-1])=='I')||
               ((a[i]=='J')&&(a[l-i-1])=='L')||
               ((a[i]=='L')&&(a[l-i-1])=='J')||
               ((a[i]=='M')&&(a[l-i-1])=='M')||
               ((a[i]=='T')&&(a[l-i-1])=='T')||
               ((a[i]=='O')&&(a[l-i-1])=='O')||
               ((a[i]=='5')&&(a[l-i-1])=='Z')||
               ((a[i]=='2')&&(a[l-i-1]=='S'))||
               ((a[i]=='S')&&(a[l-i-1]=='2'))||
               ((a[i]=='U')&&(a[l-i-1])=='U')||
               ((a[i]=='V')&&(a[l-i-1])=='V')||
               ((a[i]=='1')&&(a[l-i-1])=='1')||
               ((a[i]=='W')&&(a[l-i-1])=='W')||
               ((a[i]=='X')&&(a[l-i-1])=='X')||
               ((a[i]=='Y')&&(a[l-i-1])=='Y')||
               ((a[i]=='Z')&&(a[l-i-1])=='5')||
               ((a[i]=='5')&&(a[l-i-1])=='Z')||
               ((a[i]=='8')&&(a[l-i-1])=='8'))  {
                m++;
               }
        }
        if(l==p&&l==m)  printf("%s -- is a mirrored palindrome.\n\n",a);
        else if((l==p)&&(l!=m)) printf("%s -- is a regular palindrome.\n\n",a);
        else if((l!=p)&&(l==m)) printf("%s -- is a mirrored string.\n\n",a);
        else if((l!=p)&&(l!=m)) printf("%s -- is not a palindrome.\n\n",a);
    }
    return 0;
}
