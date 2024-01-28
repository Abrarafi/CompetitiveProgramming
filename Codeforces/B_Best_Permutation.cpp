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
    vector<int> v;
    if(n==1)cout<<1<<endl;
    else if(n==2)cout<<"1 2"<<endl;
    else if(n==3)cout<<"2 1 3"<<endl;
    else if(n==4)cout<<"2 1 3 4"<<endl;
    else{
        v.push_back(n);
        v.push_back(n-1);
        v.push_back(1);
        v.push_back(n-2);
        v.push_back(2);
        if(n>5)
        {
            for(int i=n-3;i>2;i--)
            {
                v.push_back(i);
            }
        }
        reverse(v.begin(),v.end());
        for(int i:v)cout<<i<<" ";
        cout<<endl;
    }
    }


}