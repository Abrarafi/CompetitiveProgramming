#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v;
	cin>>v;
	int adj[v][v];
	for(int i=0;i<v;i++)
		for(int j=0;j<v;j++)
		{
			cin>>adj[i][j];
		}
	int dis[v][v];
	for(int i=0;i<v;i++)
		for(int j=0;j<v;j++)
		{
			//if(i==j)dis[i][j]=0;
			if(adj[i][j])dis[i][j]=adj[i][j];
			else dis[i][j]=10000;
		}
	for(int k=0;k<v;k++)
		for(int i=0;i<v;i++)
		for(int j=0;j<v;j++)
		{
			dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);

		}

	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++)
		{
			if(dis[i][j]>=1000)cout<<'0'<<' ';
			else if(dis[i][j])cout<<'1'<<" ";
			else cout<<'0'<<' ';
		}
		cout<<endl;
	}

}