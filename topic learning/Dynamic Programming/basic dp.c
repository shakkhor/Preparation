#include<stdio.h>

//functions
int fibo(int n);
void init();
//global variable
int fibara[200];


int main()
{
    init();
    printf("%d\n",fibo(45));


    return 0;
}
void init()
{
    int i ;
    for(i=0; i<100; i++)
    {
        fibara[i]=-1;
    }
}
int fibo(int n)
{
    if(n==1) return 1;
    if(n==0) return 0;
    if(fibara[n]!=-1) return fibara[n];
    else
    {
        fibara[n]= fibo(n-1)+fibo(n-2);
        return fibara[n];
    }
}

