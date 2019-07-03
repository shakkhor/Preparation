#include<stdio.h>

int main()
{
    int n;
    while(1==scanf("%d",&n))
    {
        int count =0;
        for(int i = 5; i>0; i--)
        {
            count +=(n/i);
            n=n%i;
        }
        printf("%d\n",count);
    }

    return 0;
}
