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
 		v.push_back({start,1});
 		v.push_back({end,-1});
 	}
 	sort(v.begin(),v.end());
 	int sum=0;
 	int mx=0;
 	for(auto i:v)
 	{
 		sum+=i.second;
 		mx=max(mx,sum);

 	}
 	cout<<mx<<endl;
}