#include<bits/stdc++.h>
using namespace std;
int main()
{
 multiset<int> mult;
 mult.insert(10);
 mult.insert(20);
 mult.insert(10);
 mult.insert(20);

 auto it=mult.find(10);

 mult.erase(it);

 //mult.erase(10);//erase all the 10 inside

 for(auto i:mult)
 {
     cout<<i<<endl;
 }   
}