#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define mii map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
    Boost;
    int n;cin>>n;
    string s;
    cin>>s;
    char ch=s[0];
    int lcount=0,ocount=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L')lcount++;
        else ocount++;
    }
    int lc=0,oc=0;
   for(int i=0;i<n;i++)
   {
    if(s[i]=='L')lc++;
        else oc++;
        if(lc!=(lcount-lc) && oc!=(ocount-oc))
        {
        cout<<i+1<<endl;
        return 0;
        
        }
   }
   cout<<"-1"<<endl;
   return 0;
}