#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        int p[n-1];
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            cin>>p[i];
            sum+=p[i];
            v.push_back(sum);
        }
        int count=p[0];
        for(int i=0;i<n-1;i++)
        {
            if(count>=v[i])count+=p[i];
            else count+=((v[i]-count)+p[i]);
        }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
