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
        set<char> se;
        int sum=0,count=0;
        for(int i=0;i<n;i++)
        {
            se.insert(s[i]);
        }
        vector<char> v(se.begin(),se.end());
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i]==s[j])
                count++;
            }
            sum+=(count+1);
            count=0;
        }
        cout<<sum<<endl;
    }
}