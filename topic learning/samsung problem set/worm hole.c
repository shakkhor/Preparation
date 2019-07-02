/*
Wormhole
A spacecraft has to go from the source (S) to destination (D). There are N number of wormholes in between
Each wormhole is bi-directional
Each wormhole has 5 values.
First 2 values are starting coordinate of the wormhole and after that value no. 3 and 4 represents ending coordinate of the wormhole and last 5th value is represents the cost to pass through this wormhole
the cost to pass through the wormhole can be zero
Spacecraft may or may not use the wormhole
The time taken to travel outside wormhole between two points (x1, y1) and (x2, y2) is given by a formula
|x1 - x2| + |y1 – y2|
find the minimum time to reach D from S.
sample input:
1 1 6 4     //source sx,sy,dx,dy
2
2 2 5 3 1   //wormhole sx,sy,dx,dy,distance
3 2 6 3 10

*/

#include <bits/stdc++.h>
using namespace std;
struct node{

   int dist,x,y;
   node(){}
   node(int _dist,int _x,int _y)
   {
       dist=_dist;
       x=_x;
       y=_y;
   }
};

int x[] = {0,0,1,-1};
int y[] = {1,-1,0,0};

int xx[120][120][120], yy[120][120][120], cost[120][120][120], koyta[120][120];
int dist[600][600],vis[600][600],n=110,m=110;

int head=0,tail=0;

node qu[1000000];

void _sort(){
    for(int i=head; i<tail; i++){
        for(int j=i+1; j<tail; j++){
            node a,b;
            a = qu[i];
            b = qu[j];
            if(a.dist >= b.dist){
                //printf("-->a,b: %d %d\n",a.dist,b.dist);
                qu[i] = b;
                qu[j] = a;
            }
        }
    }
}
void push(node a){
    qu[tail++] = a;
    _sort();
}
node top(){
    return qu[head++];
}
int dijk(int sx,int sy,int ex,int ey)
{
    dist[sx][sy] = 0;
    vis[sx][sy] = 1;
    push(node(0,sx,sy));
    while(head<tail)
    {
        node ds = top();
        int v = ds.x;
        int w = ds.y;
        int dis = ds.dist;
        if(v == ex && w == ey){
            return dis;
        }
        if(vis[v][w] == 2)continue;
        vis[v][w] = 2;  /// means v,w theke shob jaigai jaoa sesh...
        for(int i = 0; i<4; i++)
        {
            int s = x[i] + v;
            int t = y[i] + w;
            if(s<1||s>n||t<1||t>m) continue;
            if(vis[s][t] == 0)
            {
                dist[s][t] = dis + 1;
                push(node(dist[s][t],s,t));
                vis[s][t] = 1;
                continue;
            }
            if(dist[s][t]>dis+1)
            {
                dist[s][t] = dis+1;
                push(node(dist[s][t],s,t));
            }
        }
        int lst = koyta[v][w];
        for(int i=0; i<lst; i++)
        {
            int s = xx[v][w][i];
            int t = yy[v][w][i];
            int d = cost[v][w][i];
            if(vis[s][t] == 0)
            {
                dist[s][t] = dis + d;
                push(node(dist[s][t],s,t));
                vis[s][t] = 1;
                continue;
            }
            if(dist[s][t]>d + dis)
            {
                dist[s][t] = d+dis;
                push(node(d+dis, s, t));
            }
        }
    }
    return dist[ex][ey];
}

int main()
{
    int edge,sx,sy,ex,ey,a,b,c,d,cst;
    cin>>sx>>sy>>ex>>ey;
    scanf("%d",&edge);
    for(int i=1;i<=edge;i++)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&cst);
        int e=koyta[a][b];
        koyta[a][b]++;
        xx[a][b][e]=c;
        yy[a][b][e]=d;
        cost[a][b][e]=cst;

        int t=a;
        a=c;
        c=t;
        t=b;
        b=d;
        d=t;

        e=koyta[a][b]++;
        xx[a][b][e]=(c);
        yy[a][b][e]=(d);
        cost[a][b][e]=cst;
    }

    int ans = dijk(sx, sy, ex, ey);
    cout<<ans<<endl;
}

/**


1 1 6 4
2
2 2 5 3 1
3 2 6 3 10

**/
