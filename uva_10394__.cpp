#include<bits/stdc++.h>

using namespace std;



// Sieve of Eratosthenes......

int Prime[20000005],nPrime=0;
/// 1 if not prime,o if prime

int mark[200000005];

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



vector<pair<int,int> >v;
pair<int,int>p;

void twnpair()
{
    for(int i=0;i<nPrime;i++)   {
        if(Prime[i+1]-Prime[i]==2)  {
            p=make_pair(Prime[i],Prime[i+1]);
            v.push_back(p);
        }
    }
}



int main()
{
    sieve(20000000);
    twnpair();

    int n;

    while(scanf("%d",&n)!=EOF)  {
        p=v[n-1];

        cout<<'('<<p.first<<','<<' '<<p.second<<')'<<endl;
    }

    return 0;
}
