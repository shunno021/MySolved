#include<bits/stdc++.h>

using namespace std;

int main()
{

    freopen("uva_673.input","r",stdin);
    freopen("uva_673.output","w",stdout);

    int n;
    string s;
    stack<char> stk;
    scanf("%d",&n);

    while(n--)  {
        cin>>s;
        int l=s.length();
        int c=1;

        for(int i=0;i<l;i++)    {
            if(s[i]=='(' || s[i]=='[')  stk.push(s[i]);

            if(s[i]==')' && stk.empty())    {
                c=0;
                break;
            }

             if(s[i]==']' && stk.empty())    {
                c=0;
                break;
            }

            if(s[i]==')' && stk.top()=='(') stk.pop();

            if(s[i]==']' && stk.top()=='[') stk.pop();



        }
        if((stk.empty() && c==1)|| (l==0)) {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}
