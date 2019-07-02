#include<stdio.h>
#include<stdlib.h>

#define EPSILON 0.0000000001 // least minimum value for comparison
double SquareRoot(double value) {
    double low = 0;
    double high = value;
    double mid = 0;

    while (high - low > EPSILON) {
            mid = low + (high - low) / 2;
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
    double a;
    scanf("%lf",&a);
    a= SquareRoot(a);
    printf("%0.10lf\n",a);

    return 0;
}

