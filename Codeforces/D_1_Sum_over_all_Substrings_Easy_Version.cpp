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
#define NO cout<<"NO"<<endl
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   int n;cin>>n;
   string s;cin>>s;
   
   int ans=0;
   fr(i,0,n-1)
   {
        fr(j,i,n-1)
        {
            int cnt=0;
            int c=0;
            string str=s.substr(i,j+1);
            int size=(j-i)+1;
            size=(size+1)/2;
            cout<<str<<" ";
            for(int k=0;k<str.size();k++)
            {
               
                if(c>=size)
                {
                    c=size;
                    break;
                }
                if(str[k]=='1')cnt++;
                else if(str[k]=='0')
                {
                    if(cnt==1)c++;
                    else c+=(cnt/2)-cnt>1?1:0;
                    cnt=0;
                }
            }
           if(c<size) c+=cnt==1?cnt:cnt/2;
           if(c>size)c=size;
           cout<<c<<endl;
            ans+=c;
        }
        cout<<endl;
   }
   cout<<ans<<endl;
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