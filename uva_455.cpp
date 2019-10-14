#include<bits/stdc++.h>

using namespace std;



// O (n)
vector<int> zFunction (string s) {
	int n = (int) s.length();
	vector<int> z (n);
	for (int i=1, l=0, r=0; i<n; ++i) {
		if (i <= r)
			z[i] = min (r-i+1, z[i-l]);
		while (i+z[i] < n && s[z[i]] == s[i+z[i]])
			++z[i];
		if (i+z[i]-1 > r)
			l = i,  r = i+z[i]-1;
	}
	return z;
}




int main()
{
    int n;
    string s;
    cin>>n;

    while(n--)  {
        cin>>s;

        int l=0;

        vector<int>v=zFunction(s);


        for(int i=v.size()-1;i>=0;i--) {
            if(v[i]!=0) {
                l=v[i];
                break;
            }
        }
        cout<<l<<endl;

        cout<<endl;
    }
    return 0;
}
