#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,count=0,mx=0;
        cin >> n;

        int a[n];

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                count++;
            }
            if(a[i]==1)
            {
                mx=max(mx,count);
                count=0;
            }
        }
        mx=max(mx,count);
     cout << mx << endl;

    }
}