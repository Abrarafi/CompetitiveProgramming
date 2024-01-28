#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string st1=s.substr(0,2);
        string st2=s.substr(3,2);
        if(st1>"12") cout<<"DD/MM/YYYY"<<endl;
        else if(st1<="12"&&st2>"12") cout<<"MM/DD/YYYY"<<endl;
        else cout<<"BOTH"<<endl;
        
    }


    return 0;
}