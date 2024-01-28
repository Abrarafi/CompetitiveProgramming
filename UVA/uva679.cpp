#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define mii map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl;
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define left(x) x*2
#define right(x) (x*2)+1
const int mx=524289;
const int s=1048576;
int ans[21][mx];
bool state[s];

int pos(int d,int D, int node)
{
    if(d==D)return node;
    if(!state[node])
    {   state[node]=true;
       return pos(++d,D,left(node));
    }
    else{
        state[node]=false;
   return pos(++d,D,right(node));
    }
}
int main()
{
    Boost;
    for(int i=2;i<21;i++)
    {
        memset(state,false,sizeof(state));
        for(int j=1;j<mx;j++)
        {
            ans[i][j]=pos(1,i,1);
        }
    }
    int t; cin>>t;
    while(t--)
    {
        
        int a,b;
        cin>>a>>b;
        cout<<ans[a][b]<<endl;
    }
    int b;cin>>b;
    if(b==-1)return 0;
}