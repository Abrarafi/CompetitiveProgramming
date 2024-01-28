#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        string first;
        string last;
        for(int i=0;i<n/2;i++)
        {
            first+=s[i];
            last+=s[n-i-1];

        }
        sort(first.begin(),first.end());
        sort(last.begin(),last.end());
        if(first==last)
        {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }


    }

    return 0;

}