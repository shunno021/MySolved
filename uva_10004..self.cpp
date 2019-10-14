#include<bits/stdc++.h>

using namespace std;

vector<int>vec[205];
int color[205];


int bfs(int s)
{
    queue<int>Q;
    Q.push(s);
    color[s]=1;

    int u,v;

    while(!Q.empty())   {

        u=Q.front();
        Q.pop();

        int l=vec[u].size();

        for(int i=0;i<l;i++)    {

            if(color[vec[u][i]]==0)   {
                if(color[u]==1)    {
                    color[vec[u][i]]=2;
                }
                else    color[vec[u][i]]=1;

                Q.push(vec[u][i]);
            }
            else if (color[vec[u][i]]==color[u])  {
                return 0;
            }
        }


    }
    cout<<"Check"<<endl;
    return 1;
}





int main()
{
    int node,edge;

    while(scanf("%d",&node)==1 && node) {

        scanf("%d",&edge);


        int a,b;

        for(int i=0;i<=204;i++) vec[i].clear();

        for(int i=1;i<=edge;i++)    {

            scanf("%d %d",&a,&b);

            vec[a].push_back(b);
        }
        memset(color,0,sizeof(color));

        bool ck;

        ck=bfs(0);

        if(!ck)   {
            cout<<"NOT BICOLORABLE."<<endl;
        }
        else cout<<"BICOLORABLE."<<endl;
    }
    return 0;
}

