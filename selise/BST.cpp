#include<bits/stdc++.h>
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

int maximum(int a, int b)
{
    if(a>=b) return a;
    else return b;
}

void print(BstNode* root)
{
    if(root==NULL)
    {
        return ;
    }

    print(root-> left);
    printf("%d ",root->data);
    print(root-> right);

    return ;
}





int main()
{

    BstNode* root = NULL;
    printf("How many nodes you want to insert: ");
    int n;
    scanf("%d",&n);

    for(int i =0; i<n; i++)
    {
        printf("\nEnter nodes: ");
        int x;
        scanf("%d",&x);
        root = Insert(root,x);
    }

    print(root);

    return 0;
}

