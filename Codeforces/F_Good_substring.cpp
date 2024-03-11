#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define ld long double
#define endl "\n"
#define pb push_back
#define boost ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define MOD 1000000007

bool isvow(char n)
{
	if((n=='a' ||n=='e' || n=='i' || n=='o' || n=='u'))
		return 1;
	else return 0;
}

void solve()
{
	string s;cin>>s;
	int k; cin>>k;
	int v=0;
	int c=0;
	int sz=0;
	int ss=0;
	for(int i=0;i<s.size();i++)
	{
		if(isvow(s[i]))
			{
				v++;
				c=0;
			}
		else
			{
				c++;
				v=0;
			}

		if(v==k || c==k)
		{
			sz=max((i-ss),sz);
			ss=i+1;
		}

	}
	if(sz==0)cout<<s.size()<<endl;
    else cout<<sz<<endl;
}

int main()
{
	boost
	//int t;cin>>t;while(t--)
	{
		solve();
	}
}