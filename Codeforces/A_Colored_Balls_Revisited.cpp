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
    vector<int> v(n+1);
    int temp=1;
    for(int i=1;i<n+1;i++)
    {
        cin>>v[i];
        if(v[i]>v[temp])
        {
            temp=i;
        }

    }
    cout<<temp<<endl;
    }

}