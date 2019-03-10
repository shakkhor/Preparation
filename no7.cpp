#include<bits/stdc++.h>

using namespace std;

struct node
{
    int item;
    node *left,*right;
};

node* NewNode(int item)
{
    struct node *temp = new node();
    temp->item = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void PostOrder(node *root)
{
    if(root == NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->item<<" ";
}

void InOrder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    InOrder(root->left);
    cout<<root->item<<" ";
    InOrder(root->right);
}

void PreOrder(node *root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->item<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
//
//void InsertNode(node *root,int item)
//{
//    if(root->left == NULL)
//    {
//        root->left = NewNode(item);
//    }
//    else if(root->right == NULL)
//    {
//        root->right = NewNode(item);
//    }
//    else
//    {
//        InsertNode(root->left,item);
//    }
//}
//
void InsertNode(node *root,int item)
{
    queue<node*>Qu;
    Qu.push(root);
    while(!Qu.empty())
    {
        node *temp = Qu.front();
        Qu.pop();
        if(temp->left == NULL)
        {
            temp->left = NewNode(item);
            return;
        }
        else
        {
            Qu.push(temp->left);
        }
        if(temp->right == NULL)
        {
            temp->right = NewNode(item);
            return;
        }
        else
        {
            Qu.push(temp->right);
        }
    }
    return;
}

int main(int args,char* argv[])
{
    struct node *root;
    int num,n;

    while(cin>>num)
    {
        root = NULL;
        for(int i=0; i<num; i++)
        {
            cin>>n;
            if(i==0)
            {
                root = NewNode(n);
            }
            else
            {
                InsertNode(root,n);
            }
        }
        if(num==0)
        {
            cout<<"Invalid Input!!"<<endl;
            continue;
        }
        InOrder(root);
        cout<<endl;
        PreOrder(root);
        cout<<endl;
        PostOrder(root);
        cout<<endl;
    }
    return 0;
}

