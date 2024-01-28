#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x_max=0;
        int x_min=INT_MAX;
        int y_max=0;
        int y_min=INT_MAX;
        while(n--)
        {
            int x,y;
            cin>>x>>y;
            if(y==0)
            {
                x_max=max(x_max,x);
                x_min=min(x_min,x);
            }
            else if(x==0)
            {
                y_max=max(y_max,y);
                y_min=min(y_min,y);
            }
        }
        int a,b;
        if(x_max>=0){
            if(x_min<=0)
            {
                a=x_max-x_min;
            }
            else a=x_max;
        }
        else
        {
            a=-x_min;
        }
        if(y_max>=0){
            if(y_min<=0)
            {
                b=y_max-y_min;
            }
            else b=y_max;
        }
        else
        {
            b=-y_min;
        }
        cout<<2*(a+b)<<endl;
        
    }
}