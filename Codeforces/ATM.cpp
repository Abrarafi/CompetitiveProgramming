#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int k;
        cin>>n;
        cin>>k;
        int a[n];
        for(int &i:a)
        {
        cin>>i;
        }
        for(int &i:a)
        {
            if(i<=k){
                cout<<1;
                k-=i;
            }
            else cout<<0;
        }
        cout<<endl;

    }
    return 0;

}