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

int sumofdig(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

const int N=1e6+123;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       int x;cin>>x;
        int k;cin>>k;
        
        while(1)
        {
            int sum=0;
            if(sumofdig(x)%k==0)break;
            x++;
        }

        cout<<x<<endl;
    }
}