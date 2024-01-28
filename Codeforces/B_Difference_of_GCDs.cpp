#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) a.begin(),a.end()
#define all(a) a.begin(),a.end()
 
 
 
void solve(){
	ll n,l,r;
	cin>>n>>l>>r;
	vector<ll> v;
	for(ll i = 1;i<=n;i++){
		int ans=(((l-1)/i)+1)*i;
		if(ans>r)
		{
			cout<<"NO"<<endl;
			return;
		}
		v.push_back(ans);
	}
	cout<<"YES"<<endl;
	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}