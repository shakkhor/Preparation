#include<stdio.h>


void push(int data);
void pop();
void isempty();
void print();
int bfs(int source, int dist);


int ara[200];

int vec[200][200];
int level[200];
bool visit[200];


int front =-1, rear = -1;


int main()
{

    print("Enter the graph\n");
    print("\nHow many nodes you want to insert: ");
    int n;
    scanf("%d",&n);
    printf("\nHow many edges do you have in your graph: ");
    int e;
    scanf("%d",&e);

    int i;

    for(i = 1; i<=e; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        vec[x][y]=1;
        vec[y][x]=1;
    }
    print("\nGraph inserted\n\nNow enter source and destination");
    int source, dest;
    scanf("%d%d",&source,&dest);
    initialize(n);
    bfs(source,dest);

    return 0;
}

void isempty()
{
    if(front == rear)
    {
        printf("queue is emppty");
    }
    else
    {
        printf("Not empty\n");
    }
}


void pop()
{
    front++;
    if(front>rear)
    {
        rear = -1;
        front = -1;
    }
}

void push(int data)
{
    if (front == rear && front ==-1)
    {
        front++;
        rear++;
        ara[rear]=data;
    }
    else ara[++rear] = data;


}

void print()
{
    printf("current queue status is : ");
    int i ;
    for(i = front; i<=rear; i++)
    {
        printf("%d ",ara[i]);
    }

    printf("\n");
}

int bfs(int n)
{


}

int initialize(int n)
{
    int i =0;
    for(i = 0; i<= n; i++)
    {
        level = 0;
        visit = false;
    }
}
