#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
vector<int> graph[N];
int nCr(int n, int r) {
    if (r > n) return 0;
  
    if (r == 0 || n == r) return 1;
   
    double res = 0;
        for (int i = 0; i < r; i++) {
        res += log(n-i) - log(i+1);
    }
    return (int)round(exp(res));
}
int main()
{
    int n,m,k;cin>>n>>m>>k;
    for(int i=0;i<k;i++)
    {
        int t;
        cin>>t;
    }
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
    }
   cout<<nCr(n-k+1,2)-m<<endl;
}