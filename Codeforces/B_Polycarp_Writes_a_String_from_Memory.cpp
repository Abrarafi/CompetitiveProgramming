#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<char> su;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            su.insert(s[i]);
            if(su.size()>3)
            {
                count++;
                su.clear();
                su.insert(s[i]);
            }
        }
        if(su.size())
        {
            cout<<count+1<<endl;
        }
        else cout<<count<<endl;
    }
    return 0;
}