#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* link;
};

struct Node* head;

void Insert(int data, int position);
void print();
void Delete(int position);
void Reverse();
void revpairwise();

int main()
{
    head = NULL;
    Insert(1,1);
    Insert(2,2);
    Insert(3,3);
    Insert(4,4);
    Insert(7,5);

    print();
    Delete(4);
    print();
    Reverse();
    print();
    revpairwise();
    print();

    return 0;
}


void Insert(int data, int position)
{
    Node* temp1 = new Node();
    temp1->data = data;
    temp1-> link = NULL;

    if (position == 1)
    {
        temp1-> link = head;
        head = temp1;
        return ;
    }

    Node* temp2 = new Node();

    temp2 = head;

    for(int i = 1; i< position-1; i++)
    {
        temp2 = temp2->link;
    }
    temp1 -> link = temp2->link;
    temp2 -> link = temp1;
}

void print()
{
    Node* temp = new Node();
    temp = head;

    while(temp!= NULL)
    {
        printf(" %d", temp-> data);
        temp = temp-> link;
    }
    printf("\n");

}


void Delete(int position)
{
    Node* temp = new Node();
    temp = head;
    if (position == 1)
    {
        head = temp->link;
        return;
    }

    Node* temp2 = new Node();
    Node* prev = new Node();
    temp2 = head;
    for(int i =1 ; i<=position-1; i++)
    {

        prev = temp2;
        temp2 = temp2 -> link;
        if(temp2==NULL)
        {
            printf("Invalid position to delete\n");
            return;
        }
    }
    prev->link = temp2-> link;

}

void Reverse()
{
    Node* current = new Node();
    Node* prev = new Node();
    Node* next = new Node();

    current = head;
    prev = NULL;

    while(current != NULL)
    {
        next = current -> link;
        current-> link = prev;
        prev = current;
        current = next;

        if( current == NULL)
        {
            head = prev;
            return;
        }
    }
}

void revpairwise()
{
    Node* current = new Node();
    Node* temp = new Node();
    Node* temp1 = new Node();
    Node* next = new Node();

    current = head;
    temp = NULL;
    head = current-> link;

    while(current != NULL || current -> link != NULL)
    {
        temp = current-> link;
        temp1 = temp-> link;
        current = temp1-> link;
        temp-> link = temp1-> link ;
        temp1-> link = temp;






        //next = current -> link;
        //current-> link = prev;
        //prev = current;
        //current = next;

//        if( current == NULL)
//        {
//            head = prev;
//            return;
//        }


    }
}
