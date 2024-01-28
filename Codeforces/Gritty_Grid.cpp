#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        if(n==m && x!=y) cout<<"YES"<<endl;
        else if(n!=m && x==y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}
