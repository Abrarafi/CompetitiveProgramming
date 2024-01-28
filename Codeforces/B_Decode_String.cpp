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
        vector<char> v;
        for(int i=0;i<n;i++)
        {
            if((i+2)<n){
            if(s[i+2]=='0')
            {
                if(s[i+3]!='0'){
                char ch1=s[i];
                char ch2=s[i+1];
                int temp= ((int)ch1-48)*10+(int)ch2-48;
                //cout<<temp<<endl;
                v.push_back(96+temp);
                i=i+2;
                }
                else{
                char ch=s[i];
                //cout<<ch<<endl;
                int temp=((int) ch)-48;

                //cout<<temp<<"p"<<endl;
                v.push_back(96+temp); 
            } 
            }
            else{
                char ch=s[i];
                //cout<<ch<<endl;
                int temp=((int) ch)-48;

                //cout<<temp<<"p"<<endl;
                v.push_back(96+temp); 
            }
            }
            else{
                char ch=s[i];
                //cout<<ch<<endl;
                int temp=((int) ch)-48;

                //cout<<temp<<"p"<<endl;
                v.push_back(96+temp); 
            }
            
        }
        for(auto i:v)cout<<i;
        cout<<endl;
    }
}