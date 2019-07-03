#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    while(1==scanf("%d",&n))
    {
        int hcount = 1, count =0,last;
        for(int i =0; i<n; i++)
        {
            int x;
            scanf("%d",&x);

            if(i==0)
            {
                count++;
                last = x;
                continue;
            }
            if(x<last)
            {
                if(hcount<count) hcount = count;
                count = 1;
                last=x;
            }
            else
            {
                last = x;
                count++;
            }
            if(i==n-1)
            {
                if(hcount<count) hcount = count;
            }

        }
        printf("%d\n",hcount);
    }

    return 0;
}
