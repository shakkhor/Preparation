#include<stdio.h>

//global variable
int ara[210][210]={0};
int visit[210];
int color[210]={0};
int front=-1, rear=-1;
int mat[210];
int n;

//functions
int bfs(int src);
void push(int data);
void pop();
int top();
int isempty();
void init(int n);
void qinit();




int main()
{
    while(1==scanf("%d",&n) && n!=0)
    {
        init(n);
        qinit();
        int edge;
        scanf("%d",&edge);

        int i,j;

        for(i = 0; i<edge; i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            ara[x][y]=1;
            ara[y][x]=1;
        }

        if(bfs(0)==1) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");


    }

    return 0;
}

int bfs(int src)
{
    push(src);
    visit[src]=1;
    color[src]=1;
    int trace =1;

    while(isempty()==0)
    {
        int x = top();
        pop();
        int i;
        for(i = 0; i<n; i++)
        {
            int y =i;

            if(visit[y]==0 && ara[x][y]==1)
            {
                visit[y]=1;
                if(color[x]==1) color[y]=-1;
                else if(color[x]==-1) color[y]=1;
                push(y);
            }
            if(color[x]==color[y]&& ara[x][y]==1)
            {
                //printf("x=%d y=%d\n",color[x],color[y]);
                trace =0;
                break;
            }
        }
        if(trace ==0) break;

    }
    return trace;
}


void push(int data)
{
    if(front == rear && rear==-1)
    {
        mat[++rear]=data;
        front++;
        return;
    }
    mat[++rear]=data;
}

void pop()
{
    front++;
    if(front>rear)
    {
        front=-1;
        rear = -1;
    }
}

int isempty()
{
    if(front==rear && rear ==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int top()
{
    return mat[front];

}
void qinit()
{
    front =-1;
    rear = -1;
}
void init(int n)
{
    int i,j;
    for(i =0; i<=n; i++)
    {
        visit[i]=0;
        color[i]=0;
        mat[i]=0;
        for(j=0; j<=n; j++)
        {
            ara[i][j]=0;

        }
    }
}
