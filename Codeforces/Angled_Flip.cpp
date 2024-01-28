#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int b[n][m];
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            v1.push_back(a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>b[i][j];
            v2.push_back(a[i][j]);
        }
    }
    int test=0;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i] != v2[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	// your code goes here
	return 0;
}
