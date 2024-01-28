#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n==0)return 0;
    else if(n==1)return 1;
    else return fun(n-1)+fun(n-2);

}
int main()
{
    int t;
    cin>>t;
    cout<<fun(t)<<endl;
}