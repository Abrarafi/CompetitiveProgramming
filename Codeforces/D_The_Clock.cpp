#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
void sol()
{
    string s;
    cin>>s;
    int x;
    cin>>x;
    string h=s.substr(0,2);
    string m=s.substr(3,5);
    int ih=stoi(h);
    int im=stoi(m);
    int th=ih;
    int tm=im;
    int xh=x/60;
    int xm=x%60;
    int res=0;
    int i=0;
    while(1)
    {
        string fh=to_string(ih);
        string sh=to_string(im);
        if(fh.size()==1)
        {
            fh='0'+fh;
        }
        if(sh.size()==1)
        {
            sh='0'+sh;
        }
        reverse(sh.begin(),sh.end());
        if(fh==sh)
        {
            res++;
        }
        ih+=xh;
        im+=xm;
        if(im>=60)
        {
            ih++;
            im-=60;
        }
        if(ih>=24)
        {
            ih-=24;
        }
        if(ih==th && im==tm)
        {
            break;
        }
        

    }
    cout<<res<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        sol();
    }
    return 0;
}