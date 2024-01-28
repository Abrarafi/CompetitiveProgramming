#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a/b)==(c/d))cout<<"0"<<endl;
        else if(a==0 || c==0)cout<<"1"<<endl;
        else if(fmod((a/b),(c/d))!=0 && fmod((c/d),(a/b))!=0)
        {
            cout<<"2"<<endl;
        }
        else cout<<"1"<<endl;

    }
}