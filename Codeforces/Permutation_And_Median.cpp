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
        vector<int> a;
        vector<int> v;
        for(int i=n;i>0;i--)
        {
            a.push_back(i);
        }
        //a.erase(a.begin()+2);
        for(int i=n;i>0;i--)
        {
            if(i%2==0)
            {
                //cout<<"even"<<endl;
                v.push_back(a[(i/2)]);
                a.erase(a.begin()+((i-1)));
            } 
             /* else{
                //cout<<"odd"<<endl;
                v.push_back(a[(i/2)]);
                a.erase(a.begin()+(i/2));
            }  */
        }
        //cout<<v[0]<<endl;
        //reverse(v.begin(),v.end());
         for(int i:a)
        {
            cout<<i<<" ";
        } 
        cout<<endl;
    }
}