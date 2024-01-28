
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m];
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
		sort(a,a+n);
		sort(b,b+m);
	int j=0;
	int mx=0;
	int i=0;
	vector<int> v;
	while(i<=n && j<=m)
	{
		if(a[i]<=b[j])
		{
			mx=max(mx,a[i]);
			i++;
		}
		else
		{
			if(mx){
			v.push_back(mx);
			mx=0;
		}
			j++;
		}
	}
	for(int i:v)cout<<i<<endl;
		for(int i=v.size();i<m;i++)
		{
			cout<<"-1"<<endl;
		}

}