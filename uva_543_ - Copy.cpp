///AC


#include<bits/stdc++.h>

using namespace std;


int Prime[10000000],nPrime=0;
/// 1 if not prime,o if prime

int mark[100000002];

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




int main()
{
    int N;

    sieve(10000000);
    //for(int i=0;i<10000000;i++) cout<<mark[i]<<' '<<endl;

    while(scanf("%d",&N)==1 && N)   {

        for(int i=3;i<=N;i+=2)  {
            if(mark[i]==0)  {
                int secondPrime=N-i;
                if(mark[secondPrime]==0)    {
                    printf("%d = %d + %d\n",N,i,secondPrime);
                    break;
                }
            }
        }
    }
    return 0;
}
