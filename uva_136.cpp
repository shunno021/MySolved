#include<bits/stdc++.h>

//#define ui usingned;

using namespace std;

int main()
{
    unsigned int i,c=0;

    set<unsigned int>s;

    s.insert(1);

    while(1)    {

        i=*s.begin();
        //cout<<i<<endl;
        s.erase(i);
        c++;
        if(c==1500) {
            cout<<"The 1500'th ugly number is "<<i<<'.'<<endl;

            return 0;
        }
        s.insert(i*2);
        s.insert(i*3);
        s.insert(i*5);
    }
    return 0;
}

