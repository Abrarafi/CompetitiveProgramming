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
       char arr[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>arr[i][j];
            }
        }
        int r1=0;
        int c1=0;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
               
                
                    if(arr[i][j]=='#'&& arr[i][j+2]=='#')
                    {
                        r1=i;
                        c1=j;
                        break;
                    }
                
                //cout<<arr[i][j];
            }
            //cout<<endl;
        }
        int r=r1;
        int c=c1+2;
        cout<<r<<" "<<c<<endl;
    }
    return 0;
}