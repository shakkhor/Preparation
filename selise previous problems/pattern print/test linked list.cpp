#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* link;
};


Node* head = NULL;


void Insert(int data)
{
    if(head==NULL)
    {
        Node* temp = new Node();
        temp-> data = data;
        temp-> link = NULL;
        head = temp;
        return;
    }

    Node* temp = new Node();
    temp -> data = data;
    temp -> link = NULL;

    Node* temp2 = head;

    while(temp2!=NULL)
    {
        if(temp2->link == NULL) break;
        temp2= temp2->link;

    }

    temp2->link = temp;
    //printf("data inserted");
    return ;

}


void print()
{
    Node* temp = head;
    if(head==NULL)
    {
        printf("list is empty\n");
        return;
    }
    printf("printing the linked list: ");
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp-> link;
    }
    printf("\n");
    return;
}


int main()
{
    print();
    Insert(3);
    Insert(6);
    Insert(90);
    print();
    Insert(10);
    Insert(10);
    print();




    return 0;
}
