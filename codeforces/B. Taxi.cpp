#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    while(1==scanf("%d",&n))
    {
        int a1=0, a2=0, a3=0, a4=0;

        int sum =0, result =0;

        for(int i =0; i<n; i++)
        {
            int x ;

            scanf("%d",&x);

            if(x==4) result++;

            else if(x==2)
            {
                a2++;
            }
            else if(x==3)
            {
                a3++;
            }
            else a1++;

        }

        if(a3>0)
        {
            if(a3>=a1)
            {
                result +=a3;
                a1=0;
            }
            else if(a3<a1)
            {
                result +=a3;
                a1=a1-a3;
            }
        }

        if(a2>0)
        {
            if(a2%2==0)
            {
                result +=(a2/2);
            }
            else
            {
                result +=(a2/2);
                result+=1;
                a2=1;
            }
        }

        if(a1>0)
        {
            if(a2==1 && a1>=2)
            {
                a1-=2;
            }
            else if(a2==1 && a1==1)
            {
                a1-=1;
            }
            if(a1>0)
            {
                int remain = a1%4;

                if(remain!=0)
                {
                    result+=((a1/4)+1);
                }
                else
                {
                    result+=(a1/4);
                }

            }

        }


        printf("%d\n",result);
    }


    return 0;
}
