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
        vector<string> x(n);
        vector<string> y(n);
        vector<string> z(n);
        map<string,int> s1;
        map<string,int> s2;
        map<string,int> s3;
        for(int i=0;i<n;i++)
        {
           cin>>x[i];
            s1[x[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            cin>>y[i];
            s2[y[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            cin>>z[i];
            s3[z[i]]=i;
        }
        //sort(s1.begin(),s1.end());
        int a=0,b=0,c=0;
        int t1=0;
        int t2=0,t3=0;
        for(int i=0;i<n;i++)
        {
            if(s2.find(x[i])!= s2.end())t1++;
             if(s3.find(x[i])!= s3.end())t1++;
              if(s1.find(y[i])!= s1.end())t2++;
               if(s3.find(y[i])!= s3.end())t2++;
                if(s2.find(z[i])!= s2.end())t3++;
                 if(s1.find(z[i])!= s1.end())t3++;
                //cout<<t1<<" ";
               if(t1==0)a+=3;
            else if(t1==1)a+=1;
 
            if(t2==0)b+=3;
            else if(t2==1)b+=1;
 
            if(t3==0)c+=3;
            else if(t3==1)c+=1;
 
            t1=0;
            t2=0;t3=0;
        }

        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}