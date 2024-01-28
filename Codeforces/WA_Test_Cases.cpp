#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        string v;
        cin>>v;
        int m=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(v[i]=='0')m=min(m,s[i]);
        }
        cout<<m<<endl;
    }
	// your code goes here
	return 0;
}
