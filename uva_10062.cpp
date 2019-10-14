#include<bits/stdc++.h>
using namespace std;
int main()
{
    char in[1005],c[1005];
    int cn[1005],j=0;

    while(scanf("%s",in)!=EOF)  {

        if(j==1)    printf("\n");

        int inl=strlen(in);

        sort(in,in+inl);

        for(int i=0;i<1005;i++) cn[i]=0;

        int j=0;
        c[j]=in[0];
        cn[j]++;
        j++;

        for(int i=1;i<inl;i++)  {

            if(in[i]!=in[i-1])  {
                c[j]=in[i];
                cn[j]++;
                j++;
            }
            else    {
                cn[j-1]++;
            }
        }
        sort(cn,cn+j);
        int cl=strlen(c);

        for(int i=0;i<cl;i++)  {

            printf("%d %d\n",c[i],cn[i]);
        }
        j=1;
    }
    return 0;
}
