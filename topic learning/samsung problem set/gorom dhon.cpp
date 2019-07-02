#include<iostream>
using namespace std;

#define size 122
struct node{
    int dist, x,y;
    node(){}
    node(int _dist, int _x, int _y)
    {
        dist = _dist;
        x = _x;
        y = _y;
    }
};

int x[]={0,0,1,-1};
int y[]={1,-1,0,0};

int xx[size][size][size], yy[size][size][size], cost[size][size][size], koyta[size][size];
int dist[600][600], visit[600][600], n = 110, m = 110;

int head=0, tail = 0;

node qu[1000000];


void _sort()
{
    for(int i = head; i<tail; i++)
    {
        for(int j = i+1; j < tail ; j++)
        {
            node a,b;
            a = qu[i];
            b = qu[j];

            if(a.dist >= b.dist)
            {
                qu[i]=b;
                qu[j]=a;
            }
        }
    }

}

void push(node a)
{
    qu[tail++] = a;
    _sort();
}

node top()
{
    return qu[head++];
}


int dijk(int sx, int sy,int dx,int dy)
{
    dist[sx][sy]=0;
    visit[sx][sy]=1;
    push(node(0, sx,sy));

    while(head<tail)
    {
        node ds = top();
        int v = ds.x;
        int w = ds.y;
        int dis = ds.dist;

        if(v == dx && w == dy)
        {
            return dis;
        }
        if(visit[v][w]==2) continue;
        visit[v][w]=2;
        for(int i = 0; i<4; i++)
        {
            int s = x[i]+v;
            int t = y[i]+w;

            if(s<1 || s>n || t<1 || t>m) continue;

            if(visit[s][t]==0)
            {
                dist[s][t]=dis+1;
                push(node(dist[s][t],s,t));
                visit[s][t]=1;
                continue;
            }
            if(dist[s][t]>dis+1)
            {
                dist[s][t]=dis+1;
                push(node(dist[s][t],s,t));
            }

        }

        int lst = koyta[v][w];
        for(int i =0; i<lst; i++)
        {
            int s = xx[v][w][i];
            int t = yy[v][w][i];
            int d = cost[v][w][i];

            if(visit[s][t]==0)
            {
                dist[s][t]=dis+d;
                push(node(dist[s][t],s,t));
                visit[s][t]=1;
                continue;

            }
            if(dist[s][t]> d+dis)
            {
                dist[s][t]=d+dis;
                push(node(d+dis, s,t));
            }
        }
    }
    return dist[dx][dy];
}

int main()
{
    int sx,sy, dx,dy;

    cin >> sx >> sy >> dx >> dy;
    int n;

    cin >> n;
    int i;
    for(i = 0; i<n; i++)
    {
        int a,b,c,d,cst;
        cin >> a >> b >> c >> d >> cst;

        int e = koyta[a][b];
        koyta[a][b]++;
        xx[a][b][e]=c;
        yy[a][b][e]=d;
        cost[a][b][e]=cst;


        int t = a;
        a = c;
        c = t;
        t = b;
        b = d;
        d = t;

        e = koyta[a][b]++;
        xx[a][b][e]=c;
        yy[a][b][e]=d;
        cost[a][b][e]=cst;

    }

    int ans = dijk(sx,sy,dx,dy);
    cout<< ans << endl;

    return 0;
}
