#include<stdio.h>
#define M 210

int qara[M];
int ara[M][M]= {0};
int visit[M]= {0};
int color[M]= {0};
int qfront =-1 , qback =-1;
int n;

int bfs(int root);
void qpush(int val);
void qpop();
int qempty();
void init();


int main()
{
    while(1==scanf("%d",&n))
    {
        if(n==0) break;
        init();
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

int bfs(int root)
{
    int trace =1 ;
    qpush(root);
    visit[root] = 1;
    color[root] = 1;

    while(qempty()==0)
    {
        int x = qara[qfront];
        qpop();

        int i = 0;
        for(i = 0; i<n; i++)
        {
            if(ara[x][i]==1 && visit[i]==0)
            {
                visit[i]=1;
                qpush(i);
                if(color[x]==1) color[i]=-1;
                else if(color[x]==-1) color[i]=1;
            }

            if(color[x]==color[i] && ara[x][i]==1)
            {

                trace= 0;
                break;
            }
        }
        if(trace ==0) break;

    }
    return trace;
}

void qpush(int val)
{
    if(qfront==qback && qfront==-1)
    {
        qara[++qfront] = val;
        qback++;
        return ;
    }
    qara[++qback]= val;
    return ;
}

void qpop()
{
    qfront++;
    if(qfront > qback)
    {
        qfront = -1;
        qback = -1;
    }
    return ;
}

int qempty()
{
    if(qfront == qback && qfront ==-1)
    {
        return 1;
    }
    else return 0;
}

void init()
{
    int i,j;
    for(i = 0; i<n; i++)
    {
        visit[i]=0;
        color[i]=0;
        for(j = 0; j<n; j++)
        {
            ara[i][j]=0;
        }
    }
    qfront  = -1;
    qback = -1;
}
