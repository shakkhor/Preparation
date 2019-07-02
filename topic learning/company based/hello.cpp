#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p;
    for(int i = 0; i<10; i++)
    {
        p=(int*)malloc(sizeof(int));
        int k = (int)p%(7-5+1)+5;
        printf("%d\n",k);
    }

    return 0;
}
