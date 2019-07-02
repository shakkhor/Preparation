#include<stdio.h>
#include<stdlib.h>

#define error 0.00000000001
double findroot(double value)
{
    double low = 0;

    double high = value;

    double mid = 0;

    while (high - low > error)
    {
        mid = low + (high - low) / 2;
        //printf("high %lf, low %lf\n",high, low);
        if (mid*mid > value)
        {

            high = mid;


        }
        else
        {
            low = mid;
        }
    }
    return mid;
}

int main()
{
    while(1)
    {
        double a;
        scanf("%lf",&a);
        if(a<0)
        {
            printf("Negative\n");
            continue;
        }

        a= findroot(a);
        printf("%0.10lf\n",a);

    }

    return 0;
}


