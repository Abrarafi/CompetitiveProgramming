#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    double y=x-(int)x;
    cout<<y<<endl;
    y=y*10;
    if(y>=0 && y<=2)cout<<(int)x<<"-"<<endl;
    else if(y>=3 && y<=6)cout<<(int)x<<endl;
    else if(y>=7 && y<=10) cout<<(int)x<<"+"<<endl;
}