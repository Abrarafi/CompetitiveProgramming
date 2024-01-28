#include<bits/stdc++.h>
using namespace std;
void test(int a[],int b[],int n)
{
    int t=0;
    int x=0;
    int c=1;
    for(int i=0;i<n;i++)
        {
            if(a[i]!=0 || b[i]!=0)
            {
                if(a[i]!=b[i])
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else{
                    for(int j=i;j<n-1;j++)
                    {
                        if(a[j]==-1) t=1;
                        if(a[j]==1) x=1;
                        if(a[j+1]>b[j+1])
                        {
                            if(t) c*=1;
                            else c*=0;
                        }
                        else if(a[j+1]<b[j+1])
                        {
                            if(x)c*=1;
                            else c*=0;
                        }
                        else c*=1;
                    }
                    c? cout<<"YES"<<endl : cout<<"NO"<<endl;
                    return;
                }
            }
        }
        cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        test(a,b,n);
    }
}