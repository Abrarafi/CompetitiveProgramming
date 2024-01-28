#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       int te=0;
       int count=0;
       int c=0;
       int x=n;
       while(x--)
       {
        string s;
        cin>>s;
        for(int i=0;i<m;i++)
        {
            if(s[i]=='0')
            {
                c++;
                if(te)
                {
                    if(abs(i-te)<=1)
                    {
                        cout<<i-te;
                        count=1;
                    }
                    else te=i;
                }
                else te=i;
        }
       }
       
       
       }
       if(c){
    if(count)
       {
       cout<<((n*m)-c)<<"p"<<endl;
       }
       else cout<<((n*m)-2)-(c-1)<<endl;
       }
       else cout<<n*m-2<<endl;
}
}