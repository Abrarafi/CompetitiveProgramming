#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    cin>>s;
    //sort(s.begin(),s.end(), greater<int>());
    //cout<<s<<endl;
    int m=0;
    int t=0;
    vector<int>v;
    for(int i=0;i<s.size();i++)
    {
        int temp=(int) s[i]-48;
        if(temp%2==0)
        {
            v.push_back(i);
        }

    }
    if(v.size()==0)cout<<"-1"<<endl;
    else if(v.size()==1)
    {
        swap(s[s.size()-1],s[v[0]]);
        cout<<s<<endl;
    }
    else{
    for(int i=0;i<v.size();i++)
    {
        if(s[s.size()-1]>s[v[i]])
        {
            swap(s[s.size()-1],s[v[i]]);
            t=1;
            break;
        }
    }
    if(!t) swap(s[s.size()-1],s[v[v.size()-1]]);
    cout<<s<<endl;
    }
    
}