#include<stdio.h>
//global variable
int ara[100][100];


//function template
int ncr(int n, int r);
void init();



int main()
{
    init();
    printf("Enter the value of n and r:\n");
    int n,r;
    scanf("%d%d",&n,&r);
    printf("%d\n",ncr(n,r));
    return 0;
}

void init()
{
    int i,j;
    for(i=0; i<100; i++)
    {
        for(j=0; j<100; j++)
        {
            ara[i][j]=-1;
        }
    }
}

int ncr(int n, int r)
{
    if(n==r) return 1;
    if(r==1) return n;
    if(ara[n][r]!=-1) return ara[n][r];
    else
    {
        ara[n][r]=ncr(n-1,r) + ncr(n-1,r-1);
        return ara[n][r];
    }
}

