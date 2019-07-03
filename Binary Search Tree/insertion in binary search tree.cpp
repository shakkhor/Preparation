#include<bits/stdc++.h>
using namespace std;

struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;

};
void Insert(BstNode* root, int data);
BstNode* GetNewNode(int data);
int main()
{
    BstNode* root;
    root = NULL;

    Insert(root,15);
    Insert(root,10);
    Insert(root,20);





    return 0;
}

void Insert(BstNode* root, int data)
{
    if(root == NULL)
    {
        root = GetNewNode(data);
    }
    else if(data<= root->data)
    {
        root->left = Insert(root->left,data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}

BstNode* GetNewNode(int data)
{
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
