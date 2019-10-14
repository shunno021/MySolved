#include<bits/stdc++.h>

using namespace std;

int c[400];
bool vs[400];
vector<vector<int> >v(400);


int dfs(int s,int n)
{

    c[s]=1;
    vs[s]=1;

    stack<int>S;

    S.push(s);

    int u,uu,l;


    while(!S.empty())   {
        u=S.top();
        S.pop();

        l=v[u].size();

        for(int i=0;i<l;i++)    {

            uu=v[u][i];

            if(c[uu]) {
                if(c[u]==c[uu]) {
                    return 0;
                }
            }

            if(!vs[uu] && !c[uu]) {
                vs[uu]=1;
                if(c[u]==1) c[uu]=2;
                else c[uu]=1;
                S.push(uu);
            }
        }
    }
    return 1;
}



int main()
{
    int n,e,a,b;
    while(scanf("%d",&n) && n)  {

        scanf("%d",&e);


        memset(vs,0,sizeof(vs));
        memset(c,0,sizeof(c));
        //v.clear();

        for(int i=0;i<400;i++)  {
            v[i].clear();
        }


        for(int i=1;i<=e;i++)   {
            scanf("%d %d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }

        bool r;
        r=dfs(0,n);

        if(r!=0)    printf("BICOLORABLE.\n");

        else printf("NOT BICOLORABLE.\n");
    }
    return 0;
}


