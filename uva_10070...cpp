#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    int md4,md15,md100,md400,md55,nline=0;

    while(cin>>s)   {

        md4=md15=md100=md400=md55=0;

        if(nline)  cout<<endl;
        nline++;

        int l=s.size();

        for(int i=0;i<l;i++)    {

            md4=((md4*10)+(s[i]-'0'))%4;
            md15=((md15*10)+(s[i]-'0'))%15;
            md100=((md100*10)+(s[i]-'0'))%100;
            md400=((md400*10)+(s[i]-'0'))%400;
            md55=((md55*10)+(s[i]-'0'))%55;
        }
         bool lp,fck;
            lp=fck=0;

            if((!md4 && md100) || !md400)    {
                cout<<"This is leap year."<<endl;
                lp=fck=1;
            }
            if(!md15)   {
                cout<<"This is huluculu festival year."<<endl;
                fck=1;
            }
            if(lp && !md55)    cout<<"This is buluculu festival year."<<endl;
            if(!fck) cout<<"This is an ordinary year."<<endl;
    }

    return 0;
}

