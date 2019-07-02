#include<bits/stdc++.h>
using namespace std;
int ara[20]={0};
int next(int i)
{
    int sum=1;
    for(int j = 0; j<=i; j++)
    {
        sum+=ara[j];
    }
    return sum;
}

int main()
{
    //int ara[20]={0};
    int n;

    while(1==scanf("%d",&n))
    {
        for(int i =1; i<=n; i++)
        {
            if(i==1)
            {
                ara[i]=1;
                continue;
            }

            ara[i] = next(i);

        }

        for(int i =1; i<=n; i++)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
    }


    return 0;
}
