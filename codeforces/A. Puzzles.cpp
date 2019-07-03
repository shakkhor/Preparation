#include<stdio.h>
int main()
{
    int n,m;

    while(2==scanf("%d%d",&n,&m))
    {
        int ara[60];
        for(int i = 0; i<m; i++)
        {
            scanf("%d",&ara[i]);
            if(i==0) continue;
            for(int j = i; j>0; j--)
            {
                if(ara[j]<ara[j-1])
                {
                    int temp;
                    temp = ara[j];
                    ara[j]= ara[j-1];
                    ara[j-1]=temp;
                }
                else continue;
            }
        }
        int minw=99999999;
        for(int i=0; i<=m-n; i++)
        {
            int sum =0;
            for(int j=i+1; j<(i+n); j++)
            {
                sum+=(ara[j]-ara[j-1]);
            }
            if(sum < minw) minw= sum;
        }

        printf("%d\n",minw);
    }


    return 0;
}
