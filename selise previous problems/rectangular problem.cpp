#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;


int max(int a[],int size)
{
    int maxx = 0;

    for(int i =1; i<=size; i++)
    {
        if(i==1)
        {
            maxx=a[i];
            continue;
        }
        if(a[i]>maxx) maxx = a[i];
    }
    return maxx;
}

int min(int a[], int size)
{
    int minn = 0;

    for(int i =1; i<=size; i++)
    {
        if(i==1)
        {
            minn=a[i];
            continue;
        }
        if(a[i]<minn) minn = a[i];
    }
    return minn;
}

int main()
{
    int n;
    int xd[20]={0},xu[20]={0},yd[20]={0},yu[20]={0};
    scanf("%d",&n);
    for(int i =1; i<=n; i++)
    {
        int x1,x2,y1,y2;
        scanf("%d%d%d%d",&xd[i],&yd[i],&xu[i],&yu[i]);
    }

    int hx,lx, hy,ly;

    ly = max(yd,n);
    hy = min(yu,n);
    lx = max(xd,n);
    hx = max(xu,n);

    printf("ly = %d, hy = %d, lx = %d, hx = %d\n",ly,hy,lx,hx);

    int result = (int)abs(hx-lx)*(int)abs(hy-ly);

    printf("%d\n",result);







    return 0;
}
