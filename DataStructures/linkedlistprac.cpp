#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* link;
};

node* crtnode(node* ptr,int data)
{
    node* temp=new node();
    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
}
node* insert(node* ptr,int data)
{
    node* temp=new node();
    temp->data=data;
    temp->link=ptr;
    return temp;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    node* head=new node();
    head->data=a[0];
    head->link=NULL;
    node* ptr=head;
    for(int i=1;i<n;i++)
    {
        ptr=crtnode(ptr,a[i]);
    }
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->link;
    }
}