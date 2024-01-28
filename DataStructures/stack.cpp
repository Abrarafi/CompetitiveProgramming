#include<bits/stdc++.h>
using namespace std;
#define n 1000

int stack_array[n];
int top=-1;
int stack_limit;

void push(int value)
{
    if(top>=stack_limit-1)
    {
        cout << "overflow" << endl;
        return;
    }
    top++;
    stack_array[top]=value;

}
int pop()
{
    if( top==-1)
    {
        exit(1);
    }
    top--;
    return stack_array[top+1];
}
void print()
{
     if( top==-1)
    {
        cout << "underflow" << endl;
    }
    for(int i=top;i>=0;i--)
    {
        cout << stack_array[i] << " ";
}
 cout << endl;
}

int main()
{
    cin >> stack_limit;
    int x;
    cin >> x;
    while(x--)
    {
        int temp;
        cin >> temp;
        push(temp);
    }
    pop();
    pop();
    print();

return 0;
}