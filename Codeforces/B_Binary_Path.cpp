//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//Author: Abrar_Rafi

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mll map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl;
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N=1e6+123;
long long binpow(long long a, long long b) {
if (b == 0)
return 1;
long long res = binpow(a, b >> 1);
if (b % 2)
return res * res * a;
else
return res * res;
}


void solve()
{
  
  int n;cin>>n;
  string s;
  cin>>s;
  string s2;cin>>s2;
  string str="";
  int pos=-1;
  for(int i=0;i<n;i++)
  {
    if((s[i+1]=='1' && s2[i]=='0')|| i==n-1)
    {
        str+=s.substr(0,i+1);
        str+=s2.substr(i,n-i);
        pos=i;
        break;
    }
  }
  int cnt=1;
  for(int i=pos;i>=0;i--)
  {
    if(i-1>=0)
    {
        
        if(s[i]==s2[i-1])cnt++;
        else break;
    }
  }
  cout<<str<<endl;
  cout<<cnt<<endl;

}
int main()
{
    Boost;
   int t;cin>>t;
   while(t--)
   {
    solve();
   }
}