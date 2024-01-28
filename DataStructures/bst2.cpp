#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* creat_node(Node* root,int data)
{
    Node* NewNode= new Node();
    NewNode->data=data;
    NewNode->left=NewNode->right=NULL;
    return NewNode;
}

 Node* insert(Node* root,int data)
 {
    if(root==NULL)
    {
        root=creat_node(root,data);
    }
    else if(data<=root->data)
    {
        insert(root->left,data);
    }
    else insert(root->right,data);
    return root;
 }

bool search(Node* root,int key)
{
    if(root==NULL)return false;
    else if (root->data==key)return true;
    else if(key<=root->data)return search(root->left,key);
    else return search(root->right,key);

}

void preorder(Node* root)
{
    cout<<root->data<<endl;
    if(root->left)preorder(root->left);
    if(root->right)preorder(root->right);
}

int main()
{
    Node* root=NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        root=insert(root,t);
    }
//     int key;
//     cin>>key;
//     if(search(root,key))cout<<"found"<<endl;
//     else cout<<"NOT"<<endl;

preorder(root);

}