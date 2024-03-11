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

const int m=1e9+7;


int main()
{
   Boost;
   int t;cin>>t;
   while(t--)
   {
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    int b[m];
    map<int,int> ma;
    map<int,int> mb;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ma[a[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        mb[b[i]]++;
    }
    sort(a,a+n);
    sort(b,b+m);
    int flag=1;
    int ca=0;
    int cb=0;
    int both=0;
    for(int i=1;i<=k;i++)
    {
        if(ma[i]!=0 && mb[i]!=0)
        {
           
            both++;
        }
        else if(ma[i])ca++;
        else if(mb[i])cb++;
        else 
        {
            flag=0;
            NO;
            break;
        }
    }
    if(flag)
    {
        //cout<<ca<<" "<<cb<<" "<<both<<endl;
        if(ca+both<k/2 || cb+both<k/2)
        {
            NO;
        }
        else YES;
    }
   }

   
}