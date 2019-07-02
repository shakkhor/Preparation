#include<stdio.h>
int main()
{
    int x = 6;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    printf("Address of x= %d \n",&x);
    printf("value at address &x = %d\n",x);

    printf("Address of *p= %d \n",&p);
    printf("value of pointer address *p = %d\n",*p);

    printf("Address of **q= %d \n",&q);
    printf("value of pointer address *q = %d\n",**q);

    printf("Address of ***r= %d \n",&r);
    printf("value of pointer address *r = %d\n",*r);

    printf("value of x = %d\n",x);
    printf("value of *p = %d\n",*p);
    printf("value of *q = %d\n",*q);
    printf("value of **q = %d\n",**q);
    printf("value of *(*q) = %d\n",**q);
    printf("value of *(*r) = %d\n",**r);
    printf("value of *(*(*r)) = %d\n",***r);


    return 0;
}
