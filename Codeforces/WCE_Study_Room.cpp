#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(n<=k)
        {
            cout<<n<<endl;
        }
        else{
            double x=((double)n-(double)k)/3;
            if(x > (int)x)
            {
                cout<<k-((int)x+1)<<endl;
            }
            else cout<<k-(int)x<<endl;
        }
    }
}