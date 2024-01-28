#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> Q;
    //heap
    //weaker than set
    Q.push(10);
    Q.push(20);
    Q.push(2);
    Q.push(-1);

    Q.pop();//pop the greatest element

    cout<<Q.top()<<endl;
}