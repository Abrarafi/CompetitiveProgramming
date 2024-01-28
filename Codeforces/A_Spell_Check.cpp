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
        string s;
        cin>>s;
        string str;
        str="Timur";
        sort(str.begin(),str.end());
        sort(s.begin(),s.end());
        if(str==s)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}