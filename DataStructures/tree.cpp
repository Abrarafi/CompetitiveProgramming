#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* Getnewnode(int data)
{
     node* newnode= new node();
     newnode->data=data;
     newnode->left=newnode->right=NULL;
     return newnode;

}
node* insert(node* root,int data)
{
    if(root==NULL){
        root=Getnewnode(data);
    }
    else if(data<=root->data)
    {
        root->left=insert(root->left,data);
    }
    else root->right=insert(root->right,data);
    return root;
}

bool search(node* root,int data)
{
    if(root==NULL)return false;
    else if(root->data==data)return true;
    else if(data<=root->data)return search(root->left,data);
    else return search(root->right,data);
}
void preorder(node* root)
{
    cout<<root->data<<endl;
   if(root->left!=NULL)preorder(root->left);
    if(root->right!=NULL)preorder(root->right);
}
//void inorder(node* root)
//{
    //if(root->left!=NULL)inorder(root->left);
//cout<<root->data<<endl;
    //if(root->right!=NULL)inorder(root->right);
//}
//void postorder(node* root)
//{
    //if(root->left)postorder(root->left);
    //if(root->right)postorder(root->right);
    //cout<<root->data<<endl;
//}

int main()
{
    node* root=NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int temp;
        cin>>temp;
        root=insert(root,temp);
    }
    int x;
    cin >> x;
    search(root,x);
    //root=insert(root,x);

  preorder(root);
   //inorder(root);
   //postorder(root);
}