#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<long long> v;
        if(!s && !b)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"0"<<" ";
            }
            cout<<endl;
        }
        else if((s/k)<b)cout<<"-1"<<endl;
        else if((s/k)>(n+b)) cout<<"-1"<<endl;
        else{
            if(s<(k*(b+1)))
            {
            v.push_back(s);
            }
            else
            {
                v.push_back((k*(b+1))-1);
                s-=(k*(b+1))-1;
                while(s)
                {
                    if(s>=k) 
                    {
                        v.push_back(k-1);
                        s-=(k-1);
                    }
                    else{
                        v.push_back(s);
                        s=0;
                    }
                }
                
            }
            if(v.size()<=n)
            {
                for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<' ';
                }
                for(int i=0;i<(n-v.size());i++)
                {
                    cout<<"0"<<" ";
                }
                cout<<endl;
            }
            else cout<<"-1"<<endl;
        
    }
}
}