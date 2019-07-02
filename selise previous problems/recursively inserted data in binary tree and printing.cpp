#include<stdio.h>
#include<iostream>
using namespace std;


struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* getnewnode(int data)
{
    BstNode* newnode = new BstNode();
    newnode-> data = data;
    newnode->left = newnode-> right = NULL;
    return newnode;
}

BstNode* Insert(BstNode* root, int data)
{
    if(root==NULL)
    {
        root = getnewnode(data);
    }
    else if(root->data >= data )
    {
        root->left = Insert(root->left, data);
    }
    else if(root->data < data)
    {
        root->right = Insert(root->right, data);
    }

    return root;
}

void print(BstNode* root)
{
    if(root== NULL) return;


    print(root->left);
    printf("%d ", root->data);
    print(root->right);
    return;
}


int main()
{
    BstNode* root = NULL;
    int ara[]={15,12,20,25,8,13,2,10, 16,18,17};

    for(int i = 0; i<12; i++)
    {
        root= Insert(root, ara[i]);
    }

    print(root);

    return 0;
}
