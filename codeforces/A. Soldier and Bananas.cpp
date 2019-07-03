#include<stdio.h>
#include<math.h>

int main()
{
    int k,n,w,sw;
    while(3==scanf("%d%d%d",&k,&n,&w))
    {
        long long int sum = 0;
        if(w%2==0)
        {
            sw=w/2;
            sum=sw*(w+1)*k;
        }
        else
        {
            sw=(w+1)/2;
            sum= sw*w*k;
        }

        if(n>=sum)
        {
            printf("0\n");
        }
        else
        {
            printf("%I64d\n",sum-n);
        }
    }
}
