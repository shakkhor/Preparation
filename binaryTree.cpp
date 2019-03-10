#include <iostream>
using namespace std;

struct node {
	int data;
	struct node* left;
	struct node* right;
	
};

struct node* search(struct node* root, int key) 
{ 
    // Base Cases: root is null or key is present at root 
    if (root == NULL || root->key == key) 
       return root; 
     
    // Key is greater than root's key 
    if (root->key < key) 
       return search(root->right, key); 
  
    // Key is smaller than root's key 
    return search(root->left, key); 
} 

struct node* newNode(int data){
	struct node* node = new struct node;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	
	return node;
}


void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d \n", root->key); 
        inorder(root->right); 
    } 
} 
   
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key) 
{ 
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key); 
  
    /* Otherwise, recur down the tree */
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    /* return the (unchanged) node pointer */
    return node; 
} 
   


int main() {
	struct node *root = newNode(20);
	root->left = newNode(50);
	root->left->left = newNode(20);
	// your code goes here
	cout<<root->left->left->data;
	return 0;
}