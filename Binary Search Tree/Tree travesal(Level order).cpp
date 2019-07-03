#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<map>
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

void levelorder(BstNode* root)
{
    if(root==NULL) return;

    queue<BstNode*>q;

    q.push(root);

    while(!q.empty())
    {
        BstNode* temp = new BstNode();
        temp = q.front();
        q.pop();
        printf("%d ",temp->data);
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);

    }
    printf("\n");
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


    printf("Level order: ");
    levelorder(root);





    return 0;
}


