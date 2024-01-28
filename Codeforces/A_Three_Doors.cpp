#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        if(a[x-1]==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            if(a[a[x-1]-1])
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }


    }
}