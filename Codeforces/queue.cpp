#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> var;
    var.push(10);
    var.push(20);
    var.push(30);
    cout<<var.front()<<endl;
    var.pop();
    cout<<var.front()<<endl;
    return 0;
}
