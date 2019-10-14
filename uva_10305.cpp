#include<bits/stdc++.h>

using namespace std;

vector<int>ans,depend[205];
int taken[200];


void take(int p)
{
    if(!taken[p])   {
        for(int i=0;i<depend[p].size();i++) {
            take(depend[p][i]);
            ans.push_back(p);
            taken[p]=1;
        }
        if(!taken[p])   {
            ans.push_back(p);
            taken[p]=1;
        }
    }
}


int main()
{
    int n,m,a,b;

    while(scanf("%d %d",&n,&m)==2 &&(n||m)) {

        for(int i=0;i<m;i++)    {
            cin>>a>>b;
            depend[b].push_back(a);
        }

        for(int i=1;i<=n;i++)   {
            take(i);
        }

        for(int i=0;i<n;i++)    {
            if(i==n-1)  cout<<ans[i];
            else    cout<<ans[i]<<' ';
        }
        cout<<endl;

    }

    return 0;
}
