#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> c(n+1);

        for(int i = 0;i<n;i++){
            int temp;cin>>temp;
            c[temp]++;
        }
        int mx = 0;
        for(int s=2;s<=n*2;s++)
        {

            int count=0;
            for(int i=1;i<(s+1)/2;i++)
            {
                if(s-i>n)continue;
                count+=min(c[i],c[s-i]);
            }
            if(s%2==0)count+=c[s/2]/2;
            mx=max(mx,count);
        }
        cout<<mx<<endl;
    }

}