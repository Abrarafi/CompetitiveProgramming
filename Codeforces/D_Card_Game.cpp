//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//Author: Abrar_Rafi

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mll map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve(int t)
{//cout<<t<<endl;
  int n;cin>>n;
  vector<string> v;
  map<char,int> mp;
  char trump;cin>>trump;
  map<char,vector<string>> mc;
  for(int i=0;i<2*n;i++)
  {
    string s;cin>>s;v.push_back(s);
    mp[s[1]]++;
    mc[s[1]].push_back(s);
  }
  int cnt=0;
  if(mp['C']%2==1 && trump!='C' )cnt++;
  if(mp['S']%2==1 && trump!='S')cnt++;
  if(mp['D']%2==1&& trump!='D')cnt++;
  if(mp['H']%2==1 && trump!='H')cnt++;
    sort(mc['S'].begin(),mc['S'].end());
    sort(mc['C'].begin(),mc['C'].end());
    sort(mc['D'].begin(),mc['D'].end());
    sort(mc['H'].begin(),mc['H'].end());


  if(cnt>mp[trump])
  {
    cout<<"IMPOSSIBLE"<<endl;
    return;
  }
  else if(cnt==mp[trump])
  {
    int j=1,k=0;
    if('C'!=trump)
    {
    for(auto i:mc['C'])
    {
        
        if(mp['C']%2==1&& j==mp['C'])
        {
            cout<<i<<" "<<mc[trump][k]<<endl;
            k++;
            break;
        }
        else{
            cout<<i<<" ";
        if(j%2==0)cout<<endl;
        }
        j++;
    }
    }
    j=1;
    if('D'!=trump)
    {
    for(auto i:mc['D'])
    {
        
        if(mp['D']%2==1&& j==mp['D'])
        {
            cout<<i<<" "<<mc[trump][k]<<endl;
            k++;
            break;
        }
        else{
            cout<<i<<" ";
        if(j%2==0)cout<<endl;
        }
        j++;

    }
    }
    j=1;
    if('H'!=trump)
    {
    for(auto i:mc['H'])
    {
        
        if(mp['H']%2==1&& j==mp['H'])
        {
            cout<<i<<" "<<mc[trump][k]<<endl;
            k++;
            break;
        }
        else
        {
            cout<<i<<" ";
        if(j%2==0)cout<<endl;
        }
        j++;
    }
    }
    j=1;
    if('S'!=trump)
    {
    for(auto i:mc['S'])
    {
        
        if(mp['S']%2==1&& j==mp['S'])
        {
            cout<<i<<" "<<mc[trump][k]<<endl;
            k++;
            break;
        }
        else{
            cout<<i<<" ";
        if(j%2==0)cout<<endl;
        }
        j++;
    }
    }
  }
  else 
  {
    if((mp[trump]-cnt)%2!=0)cout<<"IMPOSSIBLE"<<endl;
    else{
        int j=1,k=0;
    if('C'!=trump)
    {
    for(auto i:mc['C'])
    {
        
        if(mp['C']%2==1&& j==mp['C'])
        {
            cout<<i<<" "<<mc[trump][k]<<endl;
            k++;
            break;
        }
        else{
            cout<<i<<" ";
        if(j%2==0)cout<<endl;
        }
        j++;
    }
    }
    j=1;
    if('D'!=trump)
    {
    for(auto i:mc['D'])
    {
        
        if(mp['D']%2==1&& j==mp['D'])
        {
            cout<<i<<" "<<mc[trump][k]<<endl;
            k++;
            break;
        }
        else{
            cout<<i<<" ";
        if(j%2==0)cout<<endl;
        }
        j++;

    }
    }
    j=1;
    if('H'!=trump)
    {
    for(auto i:mc['H'])
    {
        
        if(mp['H']%2==1&& j==mp['H'])
        {
            cout<<i<<" "<<mc[trump][k]<<endl;
            k++;
            break;
        }
        else
        {
            cout<<i<<" ";
        if(j%2==0)cout<<endl;
        }
        j++;
    }
    }
    j=1;
    if('S'!=trump)
    {
    for(auto i:mc['S'])
    {
        
        if(mp['S']%2==1&& j==mp['S'])
        {
            cout<<i<<" "<<mc[trump][k]<<endl;
            k++;
            break;
        }
        else
        {
            cout<<i<<" ";
        if(j%2==0)cout<<endl;
        }
        j++;
    }
    }
    j=1;
    for(int i=k;i<mc[trump].size();i++)
    {
        cout<<mc[trump][i]<<' ';
        if(j%2==0)cout<<endl;
        j++;
    }
     }
     
  }
  

    

}

int main()
{
    Boost;
    int t;cin>>t;
    while(t--)
    {
        solve(t);
    }

}