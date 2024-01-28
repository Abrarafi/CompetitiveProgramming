#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='G') s1[i]='B';
            if(s2[i]=='G') s2[i]='B';
            //if(s1[i]==s2[i])count++;
        }
        if(s1==s2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}