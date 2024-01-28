#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a<b) swap(a,b);
        int test=0;
        if(a%b==0)
        {
            int d=a/b;
            for(int i=2;i<=d;i*=2)
            {
                if(d%i!=0)test=1;
            }
            if(test)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}