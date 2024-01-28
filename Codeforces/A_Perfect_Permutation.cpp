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
        int v[n];
        if(n%2==0){
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                v[i]=i+1;
            }
            else{
                v[i]=i-1;
            }
            cout<<v[i]<<" ";
        }
        }
        else{
            v[1]=n;
            for(int i=1;i<n;i++)
            {
                v[i+1]=i;
            }
            for(int i=1;i<=n;i++)
            {
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;


    }
}