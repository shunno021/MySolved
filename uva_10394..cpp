#include<bits/stdc++.h>
#define ll long long


using namespace std;



// Sieve of Eratosthenes......

int Prime[20000005],nPrime=0;
/// 1 if not prime,o if prime

int mark[20000005];

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

                for(ll j=i*i;j<=n;j+=i*2)  {
                    // multiple comes at odd-even-odd-even

                    /// mark j not prime
                    mark[j]=1;
                }
            }
        }
    }
}

/*
void printf()
{
    for(int i=0;i<500000;i++)   cout<<Prime[i]<<endl;
}
*/

vector<pair<int,int> >v;
pair<int,int>p;

void twnPair()
{
    for(int i=0;i<nPrime;i++)    {
        if(Prime[i+1]-Prime[i]==2)    {
            p=make_pair(Prime[i],Prime[i+1]);
            v.push_back(p);
        }
    }
}




int main()
{
   sieve(20000005);
   twnPair();

   //printf();

   int s;

   while(scanf("%d",&s)!=EOF)   {
        p=v[s-1];
        cout<<'('<<p.first<<','<<' '<<p.second<<')'<<endl;
   }
   return 0;
}
