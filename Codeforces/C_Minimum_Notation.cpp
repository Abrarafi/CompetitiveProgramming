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
        string k=s;
        sort(k.begin(),k.end());
        vector<int> n;
        for(int i=0;i<s.size();i++)
        {
            int temp=(int) s[i]-48;
            n.push_back(temp);
        }
        int j=0;
        for(int i=1;i<s.size();i++)
        {
            if(n[j]>n[i])
            {
                swap(n[i],n[j]);
                j=i;
                n[i]=min(n[i]+1,9);
            }

            
        }
        for(int i:n)cout<<i;
        cout<<endl;
    }
}