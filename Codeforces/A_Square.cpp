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
    int t;cin>>t;
    while(t--)
    {
        int x1,y1;cin>>x1>>y1;
        int x2,y2;cin>>x2>>y2;
        int ans=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
        int x3,y3;cin>>x3>>y3;
        if(x1!=x2 && y1!=y2)
        {
            
            ans=((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3));
        }
        int x4,y4;cin>>x4>>y4;
        cout<<ans<<endl;
    }

}