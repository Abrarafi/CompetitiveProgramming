#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> var;
    //stack is sorting like LIFO=last in first out
    // or can be said recent to old input sorting
    var.push(10);//s=[10]
    var.push(20);//s=[10,20]
    /*cout<<var.top()<<endl;
    var.pop();
    cout<<var.top()<<endl;
    cout<<var.size()<<endl;
    cout<<var.empty()<<endl;
    cout<<endl;*/

    //Same task with vector.
    /*vector <int> vari;
    vari.push_back(10);
    vari.push_back(20);
    cout<<vari.back()<<endl;
    vari.pop_back();
    cout<<vari.back()<<endl;
    cout<<vari.size()<<endl;
    cout<<vari.empty()<<endl;*/
    //itarate in stack
    while(not var.empty())
    {
        cout<<var.top()<<endl;
        var.pop();
    }
cout<<var.empty()<<endl;
}
//problem in stake is we can't decleare stake in large size