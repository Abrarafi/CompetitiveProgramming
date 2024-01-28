#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int n;
        cin>>n;
        string s;
        cin>>s;
        s[n]=',';
        sort(s.begin(),s.end());
        vector<int> v;
            auto count=1;
            for(int i=0;i<n;i++)
            {
                if(s[i]!=s[i+1])
                {
                    v.push_back(count);
                    count=1;
                }
                else{
                    count++;
                }
            }
            int odd=0;
            //cout<<v.size()<<endl;
            for(auto i=0;i<v.size();i++)
            {
                //cout<<v[i]<<endl;
                if(v[i]&1)
                {
                    odd++;
                }
            }
            odd>0? cout<<"NO"<<endl : cout<<"YES"<<endl;
        
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}