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


void Solve()
{
   
}


int main()
{
    Boost;

    int n;cin>>n;
    
    string p;
    cin>>p;
    vector<string>ans;
    if(p[0]=='?')p[0]='1';
    for(int i=1;i<p.size();i++)
    {
        if(p[i]=='?')p[i]='0';
    }
    n--;
    while(n--)
    {
        string cur;cin>>cur;
        int m=cur.size();
        if(cur.size()<p.size())
        {
            NO;
            return 0;
        }
        else if(cur.size()>p.size())
        {
            if(cur[0]=='?')cur[0]='1';
            for(int i=1;i<cur.size();i++)
                {
                    if(cur[i]=='?')cur[i]='0';
                }
        }
        else if(cur.size()==p.size())
        {
            
            for(int i=0;i<cur.size();i++)
            {
                if(cur[i]!='?')
                {
                    if(cur[i]>p[i])
                    {
                        for(int j=i+1;j<m;j++)
                        {
                            if(cur[j]=='?')cur[j]='0';
                        }
                        for(int j=i-1;j>=0;j--)
                        {
                            if(cur[j]=='?')cur[j]=p[j];
                        }
                        break;
                    }
                    else if(cur[i]<p[i])
                    {
                        
                        bool f=0;
                        for(int j=i-1;j>=0;j--)
                        {
                            if(cur[j]=='?'&&f==0)
                            {
                                cur[j]=p[j]+1;
                                f=1;
                            }
                            else if(f==1 && cur[j]=='?')
                            {
                                cur[j]=p[j];
                            }
                        }
                        if(!f)
                        {
                            NO;
                            return 0;
                        }
                        break;

                    }
                    else  continue;
                }
                
                
            }
         }
        bool f=0;
              for(int i=m-1;i>=0;i--)
                {
                    if(cur[i]=='?'&&f==0)
                    {
                        cur[i]=p[i]+1;
                        f=1;
                    }
                    else if(cur[i]=='?'&&f==1)
                    {
                        cur[i]=p[i];
                    }
                }
                
        if(stoi(p)>=stoi(cur))
        {
            
            NO;
            return 0;
        }
        ans.push_back(p);
        p=cur;


    }
    ans.push_back(p);
    YES;
    for(auto i:ans)cout<<i<<endl;
   

    return 0;

}
