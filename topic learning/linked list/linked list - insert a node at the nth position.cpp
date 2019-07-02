#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;
    struct Node* link;
};

struct Node* head;
void Insert(int data, int position);
void print();
int main()
{
    head = NULL; // empty list
    Insert(2,1);// list : 2
    Insert(3,5); // list : 2,3
    Insert(4,1); // list : 4,2,3
    Insert(5,2); // list : 4,5,2,3
    print();
}

void Insert(int data, int position)
{
    //struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
    Node* temp1 = new Node(); // cpp way
    temp1-> data = data;
    temp1-> link = NULL;

    if(position == 1)
    {
        temp1-> link = head;
        head = temp1;
        return;
    }
    Node* temp2 = new Node();
    temp2 = head;

    for(int i = 1; i<position-1; i++)
    {
        if (temp2-> link == NULL)
        {
            printf("Invalid position\n");
            return ;
        }
        else
        {
            temp2 = temp2 -> link;
        }
    }
    temp1-> link = temp2-> link;
    temp2-> link = temp1;

}

void print()
{
    Node* temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp-> data);
        temp = temp-> link;
    }
    printf("\n");
}
