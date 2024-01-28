#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int n=x;
        int m=y;
        if(n<m)swap(n,m);
        if(n>=3)
        {
            if(m>1)
            {
                if(n==3)cout<<"2"<<" 2"<<endl;
                else {
                    cout<<x<<" "<<y<<endl;
                }
            }
            else cout<<x<<" "<<y<<endl;
        }
        else cout<<x<<" "<<y<<endl;
    }
    return 0;
}