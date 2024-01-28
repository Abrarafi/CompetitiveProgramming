#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    string w[n];
    for(int i=0;i<n;i++){
        cin>>w[i];
    sort(w[i].begin(),w[i].end());
    }
    for(int i=0;i<n;i++)
    {
        if(w[i]==s)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}