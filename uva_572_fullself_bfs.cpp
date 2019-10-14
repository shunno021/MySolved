#include<bits/stdc++.h>

using namespace std;

vector<char>v[105];
bool vs[105][105];
int cnt,m,n;
int x[]={+0,+0,+1,-1,-1,+1,-1,+1};
int y[]={-1,+1,+0,+0,+1,+1,-1,-1};


void bfs(pair<int,int>p)
{

    queue<pair<int,int>>Q;

    Q.push(p);


    while(!Q.empty())   {

        pair<int,int>pp;
        pp=Q.front();

        cout<<pp.first<<' '<<pp.second<<endl;

        Q.pop();

        for(int i=0;i<8;i++)    {
            int xx,yy;
            xx=pp.first +x[i];
            yy=pp.second +y[i];

            if(xx>=0 && xx<m && yy>=0 && yy<n)   {
                if(v[xx][yy]=='@' && !vs[xx][yy])   {
                    pair<int,int>ppp;
                    ppp=make_pair(xx,yy);
                    Q.push(ppp);
                    vs[xx][yy]=1;
                    v[xx][yy]='*';
               }
            }
        }
    }
    return;
}




int main()
{

    while(scanf("%d %d",&m,&n)==2 && m) {


        for(int i=0;i<105;i++)  v[i].clear();
        memset(vs,0,sizeof(vs));


        char a;

        for(int i=0;i<m;i++)    {
            for(int j=0;j<n;j++)    {
                cin>>a;
                v[i].push_back(a);
            }
        }
        cnt=0;
        pair<int,int>p;

        for(int i=0;i<m;i++)    {
            for(int j=0;j<n;j++)    {
                if(v[i][j]=='@' && !vs[i][j])   {
                    vs[i][j]=1;
                    v[i][j]='*';
                    cnt++;
                    p=make_pair(i,j);

                    bfs(p);
                }
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}


