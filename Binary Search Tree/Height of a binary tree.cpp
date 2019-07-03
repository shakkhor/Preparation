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

int maximum(int a, int b)
{
    if(a>=b) return a;
    else return b;
}

int findheight(BstNode* root)
{
    if(root==NULL)
    {
        return -1;
    }

    int leftheight , rightheight;

    leftheight = findheight(root-> left);
    rightheight = findheight(root-> right);

    return maximum(leftheight, rightheight)+1;
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
    root = Insert(root, 16);


    cout<< findheight(root) << endl;






    return 0;
}
