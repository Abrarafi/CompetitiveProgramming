#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000];

int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>> v;
	while(n--)
	{
		int start,end;
		cin>>start>>end;
		v.push_back({end,start});
	}
	sort(v.begin(),v.end());
	int count=1;
	int check=v[0].first;
	for(auto i:v)
	{
		if(check<=i.second)
		{
			count++;
			check=i.first;
		}
	}
	cout<<count<<endl;

}