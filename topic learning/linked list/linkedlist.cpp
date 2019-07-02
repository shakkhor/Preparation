// linked list 1. traversal of a linked list
// 2. inserting a node at the beginning of a list
// in "C" language way
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    Node* link;
};

struct Node* head; // global variable , can be accessed from anywhere

void Insert(int x);
void print();

int main()
{
    head = NULL; //empty list
    printf("How many numbers do you want to insert?\n");

    int n,i,x;

    scanf("%d",&n);
    for( i = 0; i<n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&x);
        Insert(x);

        print();
    }

    return 0;
}

void Insert(int x)
{
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = head;
    head = temp;

}

void print()
{
    struct Node* temp = head;
    printf("List is : ");
    while(temp!= NULL)
    {
        printf(" %d",temp->data);
        temp = temp->link;
    }
    printf("\n");
}
