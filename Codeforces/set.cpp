#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    //maintain sorted array
    s.insert(10);
    s.insert(20);
    s.insert(3);
    s.insert(2);

    s.erase(20);

    auto it1=s.begin();
    cout<<*it1<<endl;
    auto it2=next(s.begin(),2); 
    cout<<*it2<<endl;
    for(auto i:s)
    {
        cout<<i<<endl;
    }
}