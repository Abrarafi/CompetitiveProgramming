
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	int a[n];
	int temp=x;
	int count=0;
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
	for (int i = 0; i < n; ++i)
	{
		if(a[i]>temp) 
			{
				temp=x;
				count++;
			}
		temp-=a[i];
	}
	cout<<count<<endl;
}