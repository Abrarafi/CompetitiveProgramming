#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    cout<<t<<endl;
    for(int i=0;i<t;i++){
        int n,b;
        cin>>n>>b;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];   
        }
        int cnt = 0;
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if((a[i]&a[j])==b){
                    cnt++;
                }
                }
                if(cnt>0) break;   
            }
        if(cnt==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
return 0;
}