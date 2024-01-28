/*

author = Abrar_Rafi;

*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ignore cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define debug(x) cerr<<x<<endl;
#define here fprintf(stderr, "====I am Here====\n");
#define vi vector<int>
#define pb push_back
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define mii  map<long long int, long long int> 


void Solve()
{
   string s;
   cin>>s;
  reverse(s.begin(),s.end());
  s+='0';
  int x=-1;
  int y=0;
  for(int i=0;i<s.size()-1;i++)
  {
    if(s[i]=='9')
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[j]<'9')
            {
                s[j]++;
                i=j-1;
                x=j;
                break;
            }
        }
        for(int j=x-1;j>=y;j--)s[j]='0';
        y=x;
    }
    else if(s[i]>'4')
    {
        if(s[i+1]=='9')continue;
        else s[i+1]++;
        for(int j=i;j>=y;j--)s[j]='0';
        y=i;
        
    }
  }
  reverse(s.begin(),s.end());
  int i=0;
  if(s[0]=='0')i++;
    for(;i<s.size();i++)cout<<s[i];cout<<endl;
}


int main()
{
    Boost;

    int t=1;
    cin>>t;
    while(t--)
    {
Solve();

    }

    return 0;

}
