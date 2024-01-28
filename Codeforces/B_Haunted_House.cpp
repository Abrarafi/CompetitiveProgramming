
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define mii map<ll,ll>
#define endl "\n"

#define B ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)




int main()
{
    int t;cin>>t;
    while(t--)
    {
      int n;cin>>n;
      string str;
      cin>>str;

      int cnt=0;
      vector<ll> v;
      for(int i=n-1;i>=0;i--)
      {
        cnt++;
        if(str[i]!='1')
        {
            v.push_back(cnt);
        }

      }
      vector<ll> ans;
      for(int i=0;i<v.size();i++)
      {
        ans.push_back(v[i]-(i+1));
        //cout<<v[i]<<" "<<i<<endl;
      }
      for(int i=1;i<ans.size();i++)
      {
        ans[i]+=ans[i-1];

      }
      for(auto i:ans)cout<<i<<" ";
      for(int i=ans.size()+1;i<=n;i++)cout<<"-1"<<" ";
      cout<<endl;
    }
}