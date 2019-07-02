#include<stdio.h>
int visit[100]={0};
int parent[100]={0};
int ara[100][100]={0};
int node, edge;

int dfs(int root);
void print();


int main()
{



    scanf("%d%d",&node,&edge);

    int i =0,j;

    for(i =0; i<edge; i++)
    {
        int x,y;

        scanf("%d%d",&x,&y);
        ara[x][y]=1;
    }
    int b = 0;
    for(i = 0; i<node; i++)
    {
        if(visit[i]==0)
        {
            parent[i]=i;
            if(dfs(i)==1)
            {
                b = 1;
                break;
            }
        }

        else continue;
    }

    if(b==1) printf("Cycle detected\n");
    else printf("Cycle not detected\n");


    return 0;
}

int dfs(int root)
{
    visit[root]=1;
    int i;
    for(i = 0; i<node; i++)
    {
        if(ara[root][i]==1)
        {
            if(visit[i]==2)
            {
                continue;
            }
            else if(visit[i]==1)
            {
                print(root, i);
                return 1;
            }
            else
            {
                parent[i]=root;
                if(dfs(i)==1)
                {
                    return 1;
                }
            }
        }
        else continue;
    }
    visit[root]=2;
    return 0;
}

void print(int v, int u)
{
    printf("cycle is : ");
    if(u == v)
    {
        printf("%d %d\n", u,v);
        return;
    }

    else
    {
        while(1)
        {
            printf("%d ",v);
            if(u==v)
            {
                printf("\n");
                break;
            }

            v = parent[v];
        }
    }

}
