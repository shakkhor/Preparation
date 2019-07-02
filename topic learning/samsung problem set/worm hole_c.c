#include<iostream>
using namespace std;

#define size 122
struct node{
    int dist x,y;
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




int main()
{
    int sx,sy, dx,dy;

    scanf("%d%d%d%d",&sx,&sy,&dx,&dy);
    int n;

    scanf("%d",&n);
    int i;
    for(i = 0; i<n; i++)
    {
        int a,b,c,d,cst;
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&cst);

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

    int ans = djk(sx,sy,dx,dy);
    cout<< ans << endl;

    return 0;
}
