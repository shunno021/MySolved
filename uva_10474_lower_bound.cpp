#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,c;
    vector<int>v,vq;

    c=0;

    while(scanf("%d %d",&n,&q)==2 && (n || q))  {

        int nn;

        for(int i=0;i<n;i++)    {
            scanf("%d",&nn);
            v.push_back(nn);
        }

        for(int i=0;i<q;i++)    {
            scanf("%d",&nn);
            vq.push_back(nn);
        }

        sort(v.begin(),v.end());

        printf("CASE# %d:\n",++c);

        for(int i=0;i<q;i++)    {

            vector<int>::iterator it;

            it=lower_bound(v.begin(),v.end(),vq[i]);

            if(*it==vq[i])  printf("%d found at %d\n",vq[i],it-v.begin()+1);
            else    printf("%d not found\n",vq[i]);
        }
        v.clear();
        vq.clear();
    }
    return 0;
}
