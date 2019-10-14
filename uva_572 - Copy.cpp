#include<bits/stdc++.h>
using namespace std;

char a[101][101];
int m,n;

void dfs(int i,int j)
{
    for(int rw=i-1;rw<=i+1;rw++)    {
        for(int clm=j-1;clm<=j+1;clm++) {
            if(rw<0||rw>=m||clm<0||clm>=n)  continue;
            if(a[rw][clm]=='@') {
                a[rw][clm]=1;
                dfs(rw,clm);
            }
        }
    }
}

int main()
{
    while(scanf("%d",&m)==1&&m) {
        scanf("%d",&n);
        for(int i=0;i<m;i++)    {
            scanf("%s",a[i]);
        }
        int c=0;
        for(int i=0;i<m;i++)    {
            for(int j=0;j<n;j++)    {
                if(a[i][j]=='@')    {
                    a[i][j]=1;
                    c++;
                    dfs(i,j);
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}

