#include<iostream>
using namespace std;

struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* Getnewnode(int data)
{
    BstNode* newNode = new BstNode();
    newNode -> data= data;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

BstNode* Insert(BstNode* root, int data)
{
    if(root == NULL)
    {
        root = Getnewnode(data);
    }
    else if( data <= root -> data )
    {
        root -> left = Insert(root -> left,data);
    }
    else
    {
        root -> right = Insert(root -> right,data);
    }
    return root;
}

int Search(BstNode* root, int data)
{
    int result;
    if(root==NULL) return 0;
    if(root -> data == data) return 1;
    else if(root -> data < data)
    {
        result= Search(root -> right, data);
    }
    else if(root -> data >= data)
    {
        result= Search(root -> left, data);
    }

    return result;
}



int findmin(BstNode* root)
{
    if(root-> left == NULL) return root-> data;
    else
    {
        return findmin(root->left);
    }

}

int findmax(BstNode* root)
{
    if(root-> right == NULL) return root->data;
    else
    {
        return findmax(root->right);
    }
}

int main()
{

    BstNode* root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);


    cout<< findmin(root) << endl;
    cout<< findmax(root) << endl;



    return 0;
}
