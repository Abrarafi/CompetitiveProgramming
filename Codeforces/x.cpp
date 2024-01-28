#include <bits/stdc++.h>
using namespace std;
const int N=1e4+123;
bitset<N> isprime;
vector<int>prime;

void primegen(int n)
{
    n+=100;
    isprime[2]=1;prime.push_back(2);
    for(int i=3;i<=n;i+=2)isprime[i]=1;

    for(int i=3;i<sqrt(n);i+=2)
    {
        if(isprime[i]==1)
        {
           for(int j=i*i;j<=n;j+=(i+i))isprime[j]=0;
        }
    }

    for(int i=3;i<=n;i+=2)
    {
        if(isprime[i])
        {
            prime.push_back(i);
        }
    }
}

int main() {
  primegen(1e4);
  int a;cin>>a;
  for( auto i:prime)
  {
      if(__gcd(i,a-i)>1)
      {
        cout<<i<<endl;
        break;
      }
  }
  return 0;
}