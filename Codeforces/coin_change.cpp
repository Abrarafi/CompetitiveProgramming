#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&coins,int amount)
{
    if(amount==0)return 0;
    cout<<amount<<endl;
    int ans=INT_MAX;
    for(auto coin:coins)
    {
        if(amount-coin>=0)
        ans=min(func(coins,amount-coin)+1LL,ans+0LL);
    }
    return ans;
}

int main()
{
    vector<int> coins={2,5,3};
    int amount=34;
    long long ans=func(coins,amount);
    if(ans>=INT_MAX)cout<<"-1"<<endl;
    else cout<<ans<<endl;
}