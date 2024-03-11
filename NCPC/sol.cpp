//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//Author: Abrar_Rafi

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mll map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl;
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool checkYear(int year)
{
    if (year % 400 == 0) {
        return true;
    }
 
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0) {
        return false;
    }
 
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0) {
        return true;
    }
 
    // all other years are not leap years
    else {
        return false;
    }
}
void printd()
{
    cout<<"|---------------------------|"<<endl;
}

const int N=1e6+123;
void solve(int t)
{
    printd();
    cout<<"|Sun|Mon|Tue|Wed|Thu|Fri|Sat|"<<endl;
    printd();
    string s;
    cin>>s;
    string s2;
    cin>>s2;
    map<string,int> md;
    string date=s.substr(0,2);
    string month=s.substr(3,2);
    string year=s.substr(6,4);
    int d=stoi(date);
    int m=stoi(month);
    int y=stoi(year);
    int td;
    md["Sun"]=1;
    md["Mon"]=2;
    md["Tue"]=3;
    md["Wed"]=4;
    md["Thu"]=5;
    md["Fri"]=6;
    md["Sat"]=7;
    td=md[s2];
    map<int,vector<int>>mp;

    map<int,int> mm;
    mm[1]=31;
    mm[2]=28;
    mm[3]=31;
    mm[4]=30;
    mm[5]=31;
    mm[6]=30;
    mm[7]=31;
    mm[8]=31;
    mm[9]=30;
    mm[10]=31;
    mm[11]=30;
    mm[12]=31;
    
    if(m==2)
    {
        if(checkYear(y))
        {
            int fxd=d;
            for(int i=td;i<=7;i++)
            {
                int xd=fxd;
                if(xd<29)mp[i].push_back(xd);
                while((xd)+7<=29)
                {
                    mp[i].push_back(xd+7);
                    xd+=7;
                }
                int txd=fxd;
                while(txd-7>0)
                {
                    mp[i].push_back(txd-7);
                    txd-=7;
                }
                sort(mp[i].begin(),mp[i].end());
                fxd++;
            }
            for(int i=1;i<td;i++)
            {
                int xd=fxd;
                if(xd<29)mp[i].push_back(xd);
                while((xd)+7<=29)
                {
                    mp[i].push_back(xd+7);
                    xd+=7;
                }
                int txd=fxd;
                while(txd-7>0)
                {
                    mp[i].push_back(txd-7);
                    txd-=7;
                }
                sort(mp[i].begin(),mp[i].end());
                fxd++;
            }
        }
        else{
            int tod=mm[m];
         int fxd=d;
            for(int i=td;i<=7;i++)
            {
                int xd=fxd;
                if(xd<tod)mp[i].push_back(xd);
                while((xd)+7<=tod)
                {
                    mp[i].push_back(xd+7);
                    xd+=7;
                }
                int txd=fxd;
                while(txd-7>0)
                {
                    mp[i].push_back(txd-7);
                    txd-=7;
                }
                sort(mp[i].begin(),mp[i].end());
                fxd++;
            }
            for(int i=1;i<td;i++)
            {
                int xd=fxd;
                if(xd<tod)mp[i].push_back(xd);
                while((xd)+7<=tod)
                {
                    mp[i].push_back(xd+7);
                    xd+=7;
                }
                int txd=fxd;
                while(txd-7>0)
                {
                    mp[i].push_back(txd-7);
                    txd-=7;
                }
                sort(mp[i].begin(),mp[i].end());
                fxd++;
            }

        }
    }
    else
    {
        int tod=mm[m];
         int fxd=d;
            for(int i=td;i<=7;i++)
            {
                int xd=fxd;
                if(xd<tod)mp[i].push_back(xd);
                while((xd)+7<=tod)
                {
                    mp[i].push_back(xd+7);
                    xd+=7;
                }
                int txd=fxd;
                while(txd-7>0)
                {
                    mp[i].push_back(txd-7);
                    txd-=7;
                }
                sort(mp[i].begin(),mp[i].end());
                fxd++;
            }
            for(int i=1;i<td;i++)
            {
                int xd=fxd;
                if(xd<tod)mp[i].push_back(xd);
                while((xd)+7<=tod)
                {
                    mp[i].push_back(xd+7);
                    xd+=7;
                }
                int txd=fxd;
                while(txd-7>0)
                {
                    mp[i].push_back(txd-7);
                    txd-=7;
                }
                sort(mp[i].begin(),mp[i].end());
                fxd++;
            }

    }
    int f;
    int flag=0;
    map<int,int>ind;
    for(int i=1;i<=7;i++)
    {
        if(flag)
        {
            if(mp[i][0]/10>0)
            cout<<"| "<<mp[i][0];
            else cout<<"|  "<<mp[i][0];
            ind[i]++;
        }
        else{
            if(mp[i][0]!=1 && mp[i][4]!=0)
            {
                if(mp[i][4]/10>0)
                cout<<"| "<<mp[i][4];
                else cout<<"|  "<<mp[i][4];

            }
            else if(mp[i][0]==1) 
            {
                flag=1;
                cout<<"|  "<<mp[i][0];
                ind[i]++;
            }
            else cout<<"| - ";
        }
    }
    cout<<"|"<<endl;
    printd();
    for(int j=0;j<4;j++)
    {
        for(int i=1;i<=7;i++)
        {
            int k=j+ind[i];
            if(mp[i][k]!=0)
            {
               if(mp[i][k]/10>0)
                cout<<"| "<<mp[i][k];
                else cout<<"|  "<<mp[i][k];  
            }
            else cout<<"| - ";
        }   
        cout<<"|";
        cout<<endl;    
        printd(); 
    }
cout<<endl;
    
   
}

int main()
{
    Boost;
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve(i);
    }
}