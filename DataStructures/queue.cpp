#include<bits/stdc++.h>
using namespace std;
#define n 500

int myqueue[n];
int front=0;
int rear=-1;
int datacounter=0;

void enqueue(int value)
{
    if(rear==n)
    {
        cout << "queue is full" << endl;
        return;
    }
    myqueue[++rear]=value;
    datacounter++;

}
void dequeue()
{
    if(datacounter==0)
    {
        cout << "queue is empty" << endl;
        return;
    }
    front++;
    datacounter--;
}
void print()
{
     if(datacounter<1)
    {
        cout << "queue is empty" << endl;
        return;
        for(int i=front;i<=rear;i++)
        {
            cout << myqueue[i] << " "
        }
        cout << endl;
}
}

int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    int temp;
    cin >> temp;
    enqueue(temp);
  }
  dequeue();
  dequeue();
  print();
}