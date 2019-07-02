#include <bits/stdc++.h>
using namespace std;
int xx[1200],yy[1200];
int vis[50][50],n,m;
int x[]={1,-1,0,0};
int y[]={0,0,1,-1};
int bfs(int sx,int sy,int n)
{
    memset(vis,0,sizeof vis);
    vis[sx][sy]=1;
    queue<int>q;
    q.push(sx);
    q.push(sy);
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        int w=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int s=x[i]+v;
            int t=y[i]+w;
            if(s<0||s>=n||t<0||t>=n||vis[s][t])continue;
            vis[s][t]=vis[v][w]+1;
            q.push(s);
            q.push(t);
        }
    }
    int ma=0;
    for(int i=0;i<m;i++)
    {
        ma=max(ma,vis[xx[i]][yy[i]]-1);
    }
    return ma;

}
int ara[50][50];
int main()
{
    int i,j,k,l;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&xx[i],&yy[i]);
    }
    int ma=2147483647;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ara[i][j]==0)continue;
            ma=min(ma,bfs(i,j,n));
        }
    }
    cout<<ma<<endl;


}

