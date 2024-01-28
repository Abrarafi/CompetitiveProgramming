#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    set<int> s;
    for(int &i:v)
    {
        cin>>i;
        s.insert(i);
    }
    bool check[v.size()];
    for(int i=0;i<v.size();i++)
    {
        check[i]=0;
    }
    for(int i=0;i<v.size();i++)
    {
        if(check[i]==1)
        {
            continue;
        }
        else{
        cout<<"frequency of "<<v[i]<<" is"<<count(v.begin(),v.end(),v[i])<<endl;
        if(i+1<v.size())
        {
            if(v[i]==v[i+1])
            {
                check[i+1]=1;
            }
        }
        }

    }
    /* sort(v.begin(),v.end());
    int count=0;
    auto it=s.begin();
    for(auto i=0;i<s.size();i++)
    {
        for(int j=0;j<n;j++)
        {
            if(*it==v[j]) count++;
        }
        cout<<"frequency of "<<*it<<" is"<<endl<<count<<endl;
        count=0;
        it++;
    } */
    return 0;
}