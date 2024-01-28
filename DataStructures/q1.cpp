#include<bits/stdc++.h>
using namespace std;

void del(int a[],int n,int j)
{
	for(int i=j;i<n;i++)
	{
		a[i]=a[i+1];
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{

			if(a[i]==a[j])
			{

				for(int k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}

	for(int i=0;i<n;i++)cout<<a[i]<<" ";
		cout<<endl;

}