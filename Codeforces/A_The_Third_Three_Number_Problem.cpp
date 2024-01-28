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
        n%2==0? cout<<'0'<<" "<<'0'<<" "<<n/2<<endl : cout<<"-1"<<endl;
    }
    return 0;
}