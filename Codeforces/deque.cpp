#include<bits/stdc++.h>
using namespace std;
int main()
{
    //powerful than vector,stack,queue
    deque<int> var;
    //can pop from the front
    //can push at front
    //can pop from back
    //can push at the back
    //offers random access iterator
    var.push_front(10);//var=[10]
    var.push_front(20);//var=[20,10]
    var.push_front(30);//var=[30,20,10]
    
    var.push_back(100);//var=[30,20,10,100]
    var.push_back(200);//var=[30,20,10,100,200]
    
    var.pop_front();//var=[20,10,100,200]
    var.pop_back();//var=[20,10,100]

    cout<<var[0]<<endl;
    for(int i:var)
    {
        cout<<i<<endl;
    }
    return 0;
}