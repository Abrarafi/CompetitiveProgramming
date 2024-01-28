#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x>=0 && y>=0)
    {
        if(x<y)cout<<x<<endl;
        else{
            if(z>=0)
            {
                if(y<z)cout<<"-1"<<endl;
                else cout<<x<<endl;
            }
            else cout<<(x+(2*abs(z)))<<endl;
        }
    }
    else if(x<0 && y<0)
    {
        
        if(x>y)cout<<abs(x)<<endl;
        else{
            if(z<=0)
            {
                if(y>z)cout<<"-1"<<endl;
                else cout<<abs(x)<<endl;
            }
            else cout<<(abs(x)+(2*abs(z)))<<endl;
        }
    }
    else cout<<abs(x)<<endl;
}