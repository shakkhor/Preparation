
// linked list 1. traversal of a linked list
// 2. inserting a node at the beginning of a list
// in "C" language way
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    Node* link;
};



Node* Insert(int x,Node* head);
void print(Node* head);

int main()
{
    Node* head = NULL; //empty list
    printf("How many numbers do you want to insert?\n");

    int n,i,x;

    scanf("%d",&n);
    for( i = 0; i<n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&x);
        head = Insert(x,head);
        print(head);
    }

    return 0;
}

Node* Insert(int x, Node* head)
{
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = head;
    head = temp;
    return head;

}

void print(Node* head)
{
    printf("List is : ");
    while(head!= NULL)
    {
        printf(" %d",head->data);
        head = head->link;
    }
    printf("\n");
}
