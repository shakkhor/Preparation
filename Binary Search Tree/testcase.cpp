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

/*bool Search(BstNode* root , int data)
{
    if(root== NULL) return false;
    else if(data== root-> data) return true;
    else if(data<= root->data) return Search(root->left,data);
    else return Search(root->right, data);
}*/


int main()
{

    BstNode* root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);

    while(1)
    {
        int n;
        cout<<"Input number:\n";
        cin>>n;
        if(n==0) break;
        if(Search(root,n)==1) cout<< "pawa gese"<< endl;
        else cout<< "pawa jai nai" << endl;



    }
    return 0;
}
