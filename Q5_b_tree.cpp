#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

struct node{
                char info;
                struct node *left,*right;
            };

int flag;

void add(node *root,char r);
void postfix(node *rec);
void prefix(node *rec);
void infix(node *rec);
void add_node(node *parent);


int main()
{
    char r,le,ri;
    node *root, tmp1,tmp2,*head;

    root= new node;


    root->info = 'A';
    root->left = NULL;
    root->right = NULL;

    while(scanf(" %c",&r)==1)
    {
        flag = 0;
        add(root,r);
        if(!flag) break;
    }

    printf("\ndisplay:\n");
    printf("\nPostfix:\n");
    postfix(root);
    printf("\nPrefix:\n");
    prefix(root);
    printf("\ninfix:\n");
    infix(root);



    return 0;
}

void add(node *rec,char r)
{
    if(rec==NULL || flag ==1) return;
    if(rec->info == r)
    {
        add_node(rec);
        flag = 1;
    }
    else
    {
        add(rec->left,r);
        add(rec->right,r);
    }
    return;
}

void add_node(node *parent)
{
    char ch;
    cout << "input the left node:";
    cin>>ch;
    if(ch != '0')
    {
        node *tmp;
        tmp = new node;
        tmp->left = tmp->right = NULL;
        tmp->info = ch;
        parent->left = tmp;
    }
    cout << "input the right node:";
    cin>>ch;
    if(ch != '0')
    {
        node *tmp;
        tmp = new node;
        tmp->left = tmp->right = NULL;
        tmp->info = ch;
        parent->right = tmp;
    }
    return;
}

void postfix(node *rec)
{
    if(rec == NULL) return;
    postfix(rec->left);
    postfix(rec->right);
    printf("%c ",rec->info);

}

void prefix(node *rec)
{
    if(rec == NULL) return;
    printf("%c ",rec->info);
    prefix(rec->left);
    prefix(rec->right);
}
void infix(node *rec)
{
    if(rec == NULL) return;
    infix(rec->left);
    printf("%c ",rec->info);
    infix(rec->right);
}
