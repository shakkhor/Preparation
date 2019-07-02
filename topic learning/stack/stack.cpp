
// stack basic code compilation

#include<stdio.h>
#include<stdlib.h>

void push(int data);
void pop();
bool isEmpty();
void print();

int top =-1;
int ara[20];
int main()
{

    push(3);
    push(4);
    push(5);
    print();
    pop();
    pop();
    push(3);
    print();

    return 0;
}

void push(int data)
{
    ara[++top]=data;
}

void pop()
{
    top--;
}

void print()
{
    printf("current stack is: ");
    for(int i = top; i>=0; i--)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");
}


