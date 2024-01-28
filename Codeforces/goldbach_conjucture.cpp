#include<bits/stdc++.h>
using namespace std;
const int N=1e6+123;
bool isprime[N];
vector<int>prime;

void primegen(int n)
{
    memset(isprime,1,sizeof(isprime));
    isprime[1]=0;
    for(int i=2;i<=n;i+=2)isprime[i]=0;

    for(int i=3;i<=n;i+=2)
    {
        if(isprime[i]==1)
        {
           for(int j=i*i;j<=n;j+=(i+i))isprime[j]=0;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(isprime[i])
        {
            cout<<i<<endl;
            prime.push_back(i);
        }
    }
}

int main()
{cout<<"s"<<endl;
    primegen(N);
    int n;
    
    while(cin>>n)
    {
        if(n==0)break;
    
    for(auto i:prime)
    {
        if(isprime[n-i])
        {
            cout<<n<<" = "<<i<<" + "<<n-i<<endl;
            break;
        }

    }
    }
    
}