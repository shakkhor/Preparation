#include<stdio.h>
#include<stdlib.h>

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

int maximum(int a, int b)
{
    if(a>=b) return a;
    else return b;
}

void Inorder(BstNode* root)
{
    if(root==NULL)
    {
        return ;
    }

    Inorder(root-> left);
    //cout<< root->data << endl;
    printf("%d ",root->data);
    Inorder(root-> right);

    return ;
}


void Preorder(BstNode* root)
{
    if(root==NULL)
    {
        return;
    }

    //cout<< root->data << endl;
    printf("%d ",root->data);
    Preorder(root-> left);
    Preorder(root-> right);

    return;
}


void Postorder(BstNode* root)
{
    if(root==NULL)
    {
        return;
    }

    Postorder(root-> left);
    Postorder(root-> right);
    //cout<< root->data << endl;
    printf("%d ",root->data);
    return;
}


int main()
{

    BstNode* root = NULL;
    root = Insert(root,15);
    root = Insert(root,12);
    root = Insert(root,20);
    root = Insert(root,8);
    root = Insert(root,13);
    root = Insert(root,2);
    root = Insert(root,10);
    root = Insert(root,16);
    root = Insert(root,25);
    root = Insert(root,18);
    root = Insert(root,17);


    /*cout<< "Preorder:" ,Preorder(root) << endl;
    cout<< "Inorder:" ,Inorder(root) << endl;
    cout<< "Postorder:" ,Postorder(root) << endl;*/

    printf("Preorder:");
    Preorder(root);
    printf("\nInorder:");
    Inorder(root);
    printf("\nPostorder:");
    Postorder(root);


    return 0;
}

