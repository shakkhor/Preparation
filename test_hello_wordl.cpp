#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

struct node{
            int info;
            struct node *left,*right;
            };

int flag;
node *insert(node *pre,node *rec,int item,node *root);



int main()
{
    int n,item;

    node *root,*first=NULL;
    root = NULL;


    cout<<"enter the item:";
    cin>>item;
    root = insert(NULL,root,item,root);


    return 0;
}


node *insert(node *pre,node *rec,int item,node *root)
{
    if(rec==NULL)
    {
        node *tmp;
        tmp= new node;
        tmp->info = item,tmp->left = tmp->right = NULL;
        if(pre==NULL && rec==NULL) return tmp;
        if(item>=pre->info) pre->right = tmp;
        else pre->left = tmp;
        return root;
    }
    else
    {
        if(item >= rec->info)
            root = insert(rec,rec->right,item,root);
        else root = insert(rec,rec->left,item,root);
    }
    return root;
}





