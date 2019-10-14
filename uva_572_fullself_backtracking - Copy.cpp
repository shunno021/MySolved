#include<bits/stdc++.h>

using namespace std;

vector<char>v[105];
bool vs[105][105];
int cnt,m,n;
int x[]={+0,+0,+1,-1,-1,+1,-1,+1};
int y[]={-1,+1,+0,+0,+1,+1,-1,-1};


void BackTrack(int r,int c)
{
    v[r][c]='*';
    vs[r][c]=1;

    int xx,yy;

    for(int i=0;i<8;i++)    {
        xx=r+x[i];
        yy=c+y[i];

        if(xx>=0 && xx<m && yy>=0 && yy<n)  {
            if(v[xx][yy]=='@' && !vs[xx][yy])   {

                BackTrack(xx,yy);
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

        for(int i=0;i<m;i++)    {
            for(int j=0;j<n;j++)    {
                if(v[i][j]=='@' && !vs[i][j])   {
                    cnt++;
                    BackTrack(i,j);
                }
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}

