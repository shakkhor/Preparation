#include<stdio.h>
#include<stdlib.h>

int main()
{

    for(int i = 0; i<10; i++)
    {
        int *p;
        p = (int*)malloc(sizeof(int));
        int res = ((int)p%80)+10;

        printf("%d\n",res);
    }

    return 0;
}
