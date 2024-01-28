#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
         int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int count=1;
    int i=0;
    int x=a[0];
    while(i<n)
    {
        if((a[i]%a[0])==0)
        {
            count*=1;
        }
        else count*=0;
        i++;
    }
    count? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}