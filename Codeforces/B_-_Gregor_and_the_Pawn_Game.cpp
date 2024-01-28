#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string e,m;
        cin>>e;
        cin>>m;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(m[i]=='1')
            {
                if((i-1)>=0)
                {
                    if((i+1)<n)
                    {
                        if(e[i]=='0')
                        {
                            count++;
                            e[i]='x';
                        }
                        else if(e[i-1]=='1')
                        {
                            count++;
                            e[i-1]='x';
                        }
                        else if(e[i+1]=='1')
                        {
                            count++;
                            e[i+1]='x';
                        }
                    }
                    else{
                        if(e[i]=='0')
                        {
                            count++;
                            e[i]='x';
                        }
                        else if(e[i-1]=='1')
                        {
                            count++;
                            e[i-1]='x';
                        }
                    }
                }
                else{
                    if((i+1)<n)
                    {
                        if(e[i]=='0')
                        {
                            count++;
                            e[i]='x';
                        }
                        else if(e[i+1]=='1')
                        {
                            count++;
                            e[i+1]='x';
                        }
                    }
                    else{
                        if(e[i]=='0')
                        {
                            count++;
                            e[i]='x';
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
    }
}