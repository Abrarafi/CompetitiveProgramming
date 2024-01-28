#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node
{
    int data;
    struct node *link;
};

struct node *crtnode(struct node *ptr,int x)
{
    struct node *temp=(struct node *) malloc(sizeof(struct node));
    temp->data=x;
    temp->link=NULL;

    ptr->link=temp;
    return temp;
}

struct node *insert(struct node *ptr,int x)
{
    node *temp=new node();
    temp->data=x;
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
    struct node *head=(struct node *) malloc(sizeof(struct node));
    head->data=a[0];
    head->link=NULL;

    struct node *ptr=head;
    for(int i=1;i<n;i++)
    {
        ptr=crtnode(ptr,a[i]);
    }
    //insert at the begining
    int t;
    cin>>t;
    head=insert(head,t);
    
    //insert at certain position
    int pos;cin>>pos;
    int v;cin>>v;

    ptr=head;
    pos--;
    while(pos!=1)
    {
        ptr=ptr->link;
        pos--;
    }

    struct node *ptr2=ptr;
    
    ptr=ptr->link;

    ptr=insert(ptr,v);
    ptr2->link=ptr;

    

    //delete certain pos

    ptr=head;
    int p;cin>>p;
    p--;
    while(p>1)
    {
        ptr=ptr->link;
        p--;
    }
    //cout<<ptr->data<<endl;
    ptr->link=ptr->link->link;

    ptr=head;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->link;
    }

}