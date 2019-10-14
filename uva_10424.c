#include<stdio.h>
#include<string.h>
int main()
{
    double r;
    int i,l1,l2,s1,s2,t1,t2,a[26],b[26];
    while(scanf("%s %s",a,b)!=EOF)  {
        l1=strlen(a);
        l2=strlen(b);
        s1=0;
        for(i=0;i<l1;i++)   {
            if(a[i]=='a'||a[i]=='A')    s1=s1+1;
            else if(a[i]=='b'||a[i]=='B')    s1=s1+2;
            else if(a[i]=='c'||a[i]=='C')    s1=s1+3;
            else if(a[i]=='d'||a[i]=='D')    s1=s1+4;
            else if(a[i]=='e'||a[i]=='E')    s1=s1+5;
            else if(a[i]=='f'||a[i]=='F')    s1=s1+6;
            else if(a[i]=='g'||a[i]=='G')    s1=s1+7;
            else if(a[i]=='h'||a[i]=='H')    s1=s1+8;
            else if(a[i]=='i'||a[i]=='I')    s1=s1+9;
            else if(a[i]=='j'||a[i]=='J')    s1=s1+10;
            else if(a[i]=='k'||a[i]=='K')    s1=s1+11;
            else if(a[i]=='l'||a[i]=='L')    s1=s1+12;
            else if(a[i]=='m'||a[i]=='M')    s1=s1+13;
            else if(a[i]=='n'||a[i]=='N')    s1=s1+14;
            else if(a[i]=='o'||a[i]=='O')    s1=s1+15;
            else if(a[i]=='p'||a[i]=='P')    s1=s1+16;
            else if(a[i]=='q'||a[i]=='Q')    s1=s1+17;
            else if(a[i]=='r'||a[i]=='R')    s1=s1+18;
            else if(a[i]=='s'||a[i]=='S')    s1=s1+19;
            else if(a[i]=='t'||a[i]=='T')    s1=s1+20;
            else if(a[i]=='u'||a[i]=='U')    s1=s1+21;
            else if(a[i]=='v'||a[i]=='V')    s1=s1+22;
            else if(a[i]=='w'||a[i]=='W')    s1=s1+23;
            else if(a[i]=='x'||a[i]=='X')    s1=s1+24;
            else if(a[i]=='y'||a[i]=='Y')    s1=s1+25;
            else if(a[i]=='z'||a[i]=='Z')    s1=s1+26;
        }
        s2=0;
        for(i=0;i<l2;i++)   {
            if(b[i]=='a'||a[i]=='A')    s2=s2+1;
            else if(b[i]=='b'||b[i]=='B')    s2=s2+2;
            else if(b[i]=='c'||b[i]=='C')    s2=s2+3;
            else if(b[i]=='d'||b[i]=='D')    s2=s2+4;
            else if(b[i]=='e'||b[i]=='E')    s2=s2+5;
            else if(b[i]=='f'||b[i]=='F')    s2=s2+6;
            else if(b[i]=='g'||b[i]=='G')    s2=s2+7;
            else if(b[i]=='h'||b[i]=='H')    s2=s2+8;
            else if(b[i]=='i'||b[i]=='I')    s2=s2+9;
            else if(b[i]=='j'||b[i]=='J')    s2=s2+10;
            else if(b[i]=='k'||b[i]=='K')    s2=s2+11;
            else if(b[i]=='l'||b[i]=='L')    s2=s2+12;
            else if(b[i]=='m'||b[i]=='M')    s2=s2+13;
            else if(b[i]=='n'||b[i]=='N')    s2=s2+14;
            else if(b[i]=='o'||b[i]=='O')    s2=s2+15;
            else if(b[i]=='p'||b[i]=='P')    s2=s2+16;
            else if(b[i]=='q'||b[i]=='Q')    s2=s2+17;
            else if(b[i]=='r'||b[i]=='R')    s2=s2+18;
            else if(b[i]=='s'||b[i]=='S')    s2=s2+19;
            else if(b[i]=='t'||b[i]=='T')    s2=s2+20;
            else if(b[i]=='u'||b[i]=='U')    s2=s2+21;
            else if(b[i]=='v'||b[i]=='V')    s2=s2+22;
            else if(b[i]=='w'||b[i]=='W')    s2=s2+23;
            else if(b[i]=='x'||b[i]=='X')    s2=s2+24;
            else if(b[i]=='y'||b[i]=='Y')    s2=s2+25;
            else if(b[i]=='z'||b[i]=='Z')    s2=s2+26;
        }
        t1=0;
        while(s1)   {
            t1=t1+(s1%10);
            s1=s1/10;
        }
        t2=0;
        while(s2)   {
            t2=t2+(s2%10);
            s2=s2/10;
        }
        r=((double)t2/(double)t1)*100;
        printf("%.2lf\n",r);
    }
}
