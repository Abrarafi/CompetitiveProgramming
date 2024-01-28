#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,a,b;
    cin>>w>>a>>b;
    if(a<b)
    {
        if(a+w<b)
        {
            cout<<b-a-w<<endl;
        }
        else cout<<"0"<<endl;
    }
    else 
    {
        if(b+w<a)
        {
            cout<<a-b-w<<endl;
        }
        else cout<<"0"<<endl;
    }
}