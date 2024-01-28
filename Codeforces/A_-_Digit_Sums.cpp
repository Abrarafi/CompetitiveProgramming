#include<bits/stdc++.h>
using namespace std;
int gSum(long long n)
    {
        long long sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
int main()
{
    long long n;
    cin>>n;
    long long sum=gSum(n);
    n%sum==0? cout<<"Yes"<<endl : cout<<"No"<<endl;
}