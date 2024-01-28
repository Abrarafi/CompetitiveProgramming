#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int a[n];
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			//ar[i]=a[i];
		}
		int ans;
		sort(ar,ar+m);
		set<int> s;
		for(int i=0;i<m;i++)
		{
			s.insert(ar[i]);
		}
		int count=0;
        int x=0;
		for(auto i:s)
		{
			a[x]=i;
            x++;
		}
		int y=s.size();
        for(int i=1;i<s.size();i++)
        {
            if(a[i]!=(a[i-1]+1))
			{

				ans=a[i-1]+1;
				//cout<<a[i-1]<<endl;
				//cout<<ans<<endl;
				break;
			}
			else count++;
        }
		//cout<<count<<endl;
		if(count+1<y)
		{
			//cout<<ans<<endl;
			ans==k? cout<<"YES"<<endl : cout<<"NO"<<endl;

		}
		else{ 
			(a[y-1]+1)==k? cout<<"YES"<<endl : cout<<"NO"<<endl;
		}
	}

}