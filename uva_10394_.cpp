#include<bits/stdc++.h>

using namespace std;


int Prime[20000000],nPrime=0;
/// 1 if not prime,o if prime

int mark[20000000];
vector<pair<int,int> >v;

void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;

    /// 1 is not prime.
    mark[1]=1;
    /// almost all the evens are not prime

    for(int i=4;i<=n;i+=2)  mark[i]=1;

    /// 2 is prime
    Prime[nPrime++]=2;
    ///run loop for only odds

    for(int i=3;i<=n;i+=2)  {
        ///if not prime ,no need to do multiple cutting
        if(!mark[i])    {
            /// i is prime
            Prime[nPrime++]=i;

            ///if we don't do it,i*i may overflow

            if(i<=limit)    {
                ///loop through all odd multiple of i
                /// greater than i*i

                for(int j=i*i;j<=n;j+=i*2)  {
                    // multiple comes at odd-even-odd-even

                    /// mark j not prime
                    mark[j]=1;
                }
            }
        }
    }
}


void makePair()
{
    int cnt=1;
    pair<int,int>p;
    p=make_pair(0,0);
    v.push_back(p);

    for(int i=3;i<=20000000-2;i+=2)   {
        if(mark[i]==0 && mark[i+2]==0)  {
            p=make_pair(i,i+2);
            v.push_back(p);
        }
    }
}



int main()
{
    sieve(20000000);
    makePair();

    int N;
    pair<int,int>P;

    while(scanf("%d",&N)!=EOF)  {
        P=v[N];
        cout<<'('<<P.first<<','<<' '<<P.second<<')'<<endl;
    }
    return 0;
}
