#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        int m1[8]={2,2,-2,-2,1,1,-1,-1};
        int m2[8]={1,-1,1,-1,2,-2,2,-2};
        int m[9][9];
        int ans=0;
        for(int i=0;i<=8;i++)
        for(int j=0;j<=8;j++)
        {
            m[i][j]=0;
        }
        for(int i=0;i<8;i++)
        {
            int x=x1+m1[i];
            int y=y1+m2[i];
            if(x>0&&x<=8&&y>0&&y<=8)
            {
            m[x][y]=1;
            }
        }
        for(int i=0;i<8;i++)
        {
           
            int x=x2+m1[i];
            int y=y2+m2[i];
            if(x>0&&x<=8&&y>0&&y<=8)
            {
                if(m[x][y]==1)
                ans=1;
            }
        }
        ans==1? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}