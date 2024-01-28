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
        string s ;
        cin>>s;
        int sum=0;
        if(s[0]=='0')sum=10;
        else
        sum=abs(1-(s[0]-'0'))+1;
        for(int i=1;i<4;i++)
        { //cout<<sum<<" ";
            if(s[i-1]=='0')
            {
                if(s[i]=='0')
                {
                    sum+=1;
                }
                else
                {
                    sum+=abs(10-(s[i]-'0'))+1;
                }
            }
            else 
            {
                if(s[i]=='0')sum+=abs(10-(s[i-1]-'0'))+1;
                else sum+=abs((s[i]-'0')-(s[i-1]-'0'))+1;
            }
            
        }
        
        cout<<sum<<endl;
    }
}