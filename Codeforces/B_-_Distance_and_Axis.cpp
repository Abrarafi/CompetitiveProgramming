#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n>k)
        {
            if(n%2==0)
            {
                if(k%2==0)cout<<"0"<<endl;
                else cout<<'1'<<endl;
            }
            else{
                if(k%2==0)cout<<"1"<<endl;
                else cout<<'0'<<endl;
            }
        }
        else cout<<abs(n-k)<<endl;
    }
}