#include<stdio.h>


//functions
void qpush(int data);
void qpop();
int isempty();
void print();
void init(int node);
int bfs(int src, int dst,int node);

//global variable
int mat[200][200];
int visit[200];
int level[200];
int ara[200];

//for queue
int front = -1, rear = -1;


int main()
{
    /*qpush(6);
    qpush(7);
    qpush(8);
    print();
    qpop();
    qpush(9);
    printf("empty %d\n",isempty());
    qpush(10);
    print();
    qpop();
    qpop();
    qpop();
    print();
    qpop();
    qpush(1);
    print();
    printf(" top %d\n",ara[front]);
    qpop();*/

    printf("Enter nodes and edges: \n");
    int node, edge;
    scanf("%d%d",&node,&edge);

    int i;
    for(i=1; i<=edge; i++)
    {
        printf("Enter connection between:\n");
        int x,y;
        scanf("%d%d",&x,&y);
        mat[x][y]=1;
        mat[y][x]=1;
    }
    int src,dst;
    printf("\nEnter source and destination\n");
    scanf("%d%d",&src,&dst);
    printf("Distance between node %d to %d is %d\n",src,dst,bfs(src,dst,node));

    return 0;
}

void init(int node)
{
    int i;
    for(i=0; i<node; i++)
    {
        visit[i]=0;
        level[i]=0;
    }
}

int bfs(int src,int dst,int node)
{
    int x =src;
    qpush(x);
    visit[x]=1;
    level[x]=0;

    while(isempty()==0)
    {
        x = ara[front];
        qpop();
        int i;
        for(i =1; i<=node; i++)
        {
            if(mat[x][i]==1 && visit[i]==0)
            {
                visit[i]=1;
                level[i]=level[x]+1;
                qpush(i);
            }
        }

    }
    return level[dst]-level[src];
}

void qpush(int data)
{
    if(front == rear && rear==-1)
    {
        ara[++rear]=data;
        front++;
        return;
    }
    ara[++rear]=data;
    return;
}

void qpop()
{
    front++;
    if(front> rear)
    {
        front =-1;
        rear=-1;
    }
}


int isempty()
{
    if(front ==-1 && front == rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void print()
{
    int c = 0,i=0;
    for(i = front; i<=rear; i++)
    {
        printf("%d ", ara[i]);
        c+=1;
    }
    if(c==0) printf("Nothing to print");
    printf("\n");
}
