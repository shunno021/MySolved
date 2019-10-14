#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,c;
    vector<int>v,vq;
    map<int,int>m;
    c=0;
    while(scanf("%d %d",&n,&q)==2 && (n || q))  {

        int nn;
        v.clear();
        vq.clear();
        m.clear();

        for(int i=0;i<n;i++)    {
            scanf("%d",&nn);
            v.push_back(nn);
        }
        for(int i=0;i<q;i++)    {
            scanf("%d",&nn);
            vq.push_back(nn);
        }
        sort(v.begin(),v.end());

        for(int i=0;i<n;i++)    {
            if(m[v[i]]!=0)  continue;
            else    m[v[i]]=i+1;
        }
        printf("CASE# %d:\n",++c);

        for(int i=0;i<q;i++)    {
            if(m[vq[i]]!=0) printf("%d found at %d\n",vq[i],m[vq[i]]);
            else printf("%d not found\n",vq[i]);
        }
    }
    return 0;
}
