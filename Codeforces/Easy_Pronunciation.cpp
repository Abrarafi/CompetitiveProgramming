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
        string s;
        cin>>s;
        vector<int> v;
        int count=0;
        for(int i=0;i<n;i++){
            
            if((s[i]!='a' && s[i]!='e') && ((s[i]!='i' && s[i]!='o') && s[i]!='u'))
            {
                count++;
            }
            else
            {
                count=0;
            }
            if(count>=4)
                {
                    cout<<"NO"<<endl;
                    break;
                }
        }
        if(count<4) cout<<"YES"<<endl;
    }
    return 0;
}