#include<bits/stdc++.h>
using namespace std;
#define all(v)  v.begin(),v.end()
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    long long iszero=0;
    vector<long long> v;
    for(long long &i:a)
    {
        cin>>i;
        if(i==0)
        {
            iszero=1;
        }
        else v.push_back(i);
    }
    sort(v.begin(),v.end());
    if(iszero)
    {
        if(v.size()>2)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(v.size()==0 || v.size()==1)  
        {
            cout<<"YES"<<endl;
            return;
        }
        if(v[0]+v[1]==0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else{
        if(v.size()>=5)
        {
            cout<<"NO"<<endl;
            return;
        }
        for(long long i=0;i<v.size();i++)
        {
            for(long long j=i+1;j<v.size();j++)
            for(long long k=j+1;k<v.size();k++)
            {
                long long x=v[i]+v[j]+v[k];
                long long having=1;
                for(long long l=0;l<v.size();l++)
                {
                    if(x==v[l]){
                    //cout<<"printed"<<endl; 
                    having=0;
                }
                }
                if(having) 
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        cout<<"YES"<<endl;
    }

}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}