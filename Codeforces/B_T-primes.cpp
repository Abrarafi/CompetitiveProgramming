#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)return false;
    if(n<=3)return true;
    if(n%2==0 || n%3==0) return false;

        for(int i=5;i*i<=n;i+=6)
        {
            if(n%i==0 || n%(i+2)==0)return false;
        }
        return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        double s=sqrt(n);
        if(ceil(s)!=floor(s))cout<<"NO"<<endl;
        else{
            isPrime(s)?cout<<"YES"<<endl : cout<<"NO"<<endl;
        }
    }
}