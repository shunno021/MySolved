#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char a[27],b[27];
    int la,lb,ra,rb,ta,tb,ca,cb;

    while(scanf("%s %s",a,b)!=EOF)  {
        la=strlen(a);
        lb=strlen(b);
        ta=0;
        tb=0;

        for(int i=0;i<la;i++)   {
            if(a[i]>='a'&&a[i]<='z')    {
                ta=ta+(a[i]-96);
            }
            else if(a[i]>='A'&&a[i]<='Z')   {
                ta=ta+(a[i]-64);
            }
        }


        for(int i=0;i<lb;i++)   {
            if(b[i]>='a'&&b[i]<='z')    {
                tb=tb+(b[i]-96);
            }
            else if(b[i]>='A'&&b[i]<='Z')   {
                tb=tb+(b[i]-64);
            }
        }

        ca=ta;
        cb=tb;

        while(1)    {
            if(ca<10||cb<10)    break;
            ta=ca;
            tb=cb;

            ra=0;
            rb=0;

            while(1)    {

                if(ta<10||tb<10)    break;

                ra=ra+(ta%10);
                rb=rb+(tb%10);

                ta/=10;
                tb/=10;
            }
            ca=ra;
            cb=rb;
        }

        double fr=(ca/cb)*100;

        printf("%lf %%\n",fr);
    }
    return 0;
}
