//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//Author: Abrar_Rafi

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define mii map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl;
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    Boost;
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;cin>>s;
        map<char,int> mp;
        set<char> st;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            st.insert(s[i]);
        }
        int cnt=0;
      for(auto i:st)
      {
          if(mp[i]%2==1)
            cnt++;
        }
        if(cnt>k)
        {
            if(cnt-k==1)YES;
            else NO;
        }
        else 
        {
            YES;
        }
    }
}