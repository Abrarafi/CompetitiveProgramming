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
        ll a,b,r;
        cin>>a>>b>>r;
        
        if(a<b)swap(a,b);
        int j=0;
        ll x=0;
        ll A=a;
        ll B=b;

        while(a || b)
        {
            cout<<a<<" "<<b<<" "<<x<<endl;
            if(x>=r)break;

            if((a&1)==1 && (b&1)==0)
            {
                if(x+(1<<j)>r || x+(1<<j)>=A)
                {
                    break;
                }
                else
                 x += (1 << j);
             }
 
        
        a >>= 1;
        b >>= 1;
        j += 1;
        }
        ll ans=abs((A^x)-(B^x));
        cout<<x<<endl;
       cout<<ans<<endl;
       // cout<<endl;
    }
}