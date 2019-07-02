#include<bits/stdc++.h>
using namespace std;



bool visit[100];
int level[100];
vector< int >v[100];
queue< int >q;

int bfs(int src, int dst);
void init(int node);
//void vectorprint(int node);

int main()
{
    int node, edge;
    printf("Enter nodes and edges:\n");
    scanf("%d%d",&node,&edge);
    init(node);

    for(int i = 0; i<edge; i++)
    {
        printf("Enter connection between:\n");
        int x,y;
        scanf("%d%d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    //vectorprint(node);
    printf("Enter source and destination\n");
    int src, dst;
    scanf("%d%d",&src,&dst);
    printf("Distance between node %d to %d is %d",src,dst,bfs(src,dst));

    return 0;
}

void init(int node)
{
    for(int i = 0; i<=node; i++)
    {
        visit[i]=false;
        level[i]=0;
        v[i].clear();
    }
}

/*
void vectorprint(int node)
{
    for(int i=1; i<=node; i++)
    {
        printf("vector %d: size = %d ",i,v[i].size());
        for(int j ; j<v[i].size(); j++)
        {
            printf("%d ",v[i][j]);
        }
    }
    printf("\n");
}
*/

int bfs(int src, int dst)
{
    q.push(src);
    visit[src]=true;
    level[src] = 0;

    while(!q.empty())
    {
        //printf("\nq te toh dhukse");
        int x = q.front();
        q.pop();

        for(int i = 0; i<v[x].size(); i++)
        {
            int y = v[x][i];
            if(visit[y]==false)
            {
                visit[y]=true;
                level[y]=level[x]+1;
                q.push(y);
            }
        }
    }
//    /printf("\n level: ");
//    for(int i = 0; i<10; i++)
//    {
//        printf("%d ",level[i]);
//    }
//    printf("\n");
    return level[dst]-level[src];
}
