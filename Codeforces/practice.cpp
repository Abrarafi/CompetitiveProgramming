#include <bits/stdc++.h>

void search(int n)
{
    if(n==0)return;
    search(n-1);
    search(n-1);
}

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int o[n],a[n];
        for(int i = 0;i<n;i++){
            cin>>o[i];
        }
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        int cnt = 0,ans = 0;
        for(int i = 0;i<n;i++){
            if(o[i]>0){
                cnt++;
            }
            else{
                ans = max(ans,cnt);
                cnt = 0;
                continue;
            }
        }
        int cnt1 = 0,ans1 = 0;
        for(int i = 0;i<n;i++){
            if(a[i]>0){
                cnt1++;
            }
            else{
                ans1 = max(ans1,cnt1);
                cnt1= 0;
                continue;
            }
        }
        if(ans>ans1) cout<<"Om"<<endl;
        else if(ans<ans1) cout<<"Addy"<<endl;
        else cout<<"Draw"<<endl;
    }
}