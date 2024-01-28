#include<bits/stdc++.h>
using namespace std;
long long nCr(long long n)
{
    long long p;
    p=(n*(n-1))/2;
    return p;
}
int main()
{

        long long n,m;
        cin>>n>>m;
        long long kmax,kmin;
        if(n>m)
        kmax=nCr(n-(m-1));
        else kmax=0;
        if(n%m==0)
        {
            if(n/m>1)
            kmin=m*(nCr(n/m));
            else kmin=0;
        }
        else{
            if(n/m>1)
            {
                kmin=((m-(n%m))*nCr(n/m)+((n%m)*nCr((n/m)+1)));
            }
            else kmin=((n%m)*nCr((n/m)+1));
        }
        cout<<kmin<<" "<<kmax<<endl;
        

}