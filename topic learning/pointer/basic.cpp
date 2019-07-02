//pointer learning

#include<stdio.h>
int main()
{
    int a;
    int *p;
    p = &a;
    a = 5;
    printf("value of p %d\n",p);
    printf("value of a %d\n",a);
    printf("value of *p %d\n",*p);
    printf("value of &a %d\n",&a);

    *p = 8; // *p means value at p
    printf("value of *p %d\n",*p);
    printf("value of a %d\n",a);

    return 0;
}
