#include<bits/stdc++.h>
using namespace std;
#define ll long long int

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll p=log2(n)+1;
        ll a=binpow(2,p+1)-1;
        ll b=0;

        int c=n;
        cout<<a<<" "<<b<<" "<<n<<endl;
    }
}