#include<bits/stdc++.h>
using namespace std;
//lemda function
int main()
{
    auto /*or, function<int(int,int)*/ func= [](int i,int j)
    {
        return i+j;
    };
    cout<<func(20,30)<<endl;
    return 0;

}