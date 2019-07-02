/*
problem: binary search
author : sourav
CSE SUST
Reg No.: 2014331039
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[100],n,unsorted[100];
    //freopen("selectionsort.txt","r",stdin); data insert kore felar por code kaaj kore, so eikhane data insert kore abar kaaj kore data insert kortese ,
    //tai freopen kaaj kore na eikhane .
    scanf("%d",&n);
    //printf("okay");

    for(int i = 0; i<n; i++)
    {
        scanf("%d",&ara[i]);
        unsorted[i] = ara[i];
        //printf("okay");
        if(i>0)
        {
            for(int j = i; j>0; j--)
            {
                if(ara[j]<ara[j-1])
                {
                    int temp = ara[j];
                    ara[j] = ara[j-1];
                    ara[j-1]  = temp;
                }
                else  break;
            }
        }
    }

    printf("\nUnsorted : ");
    for(int i = 0; i<n; i++)
    {
        printf("%d ",unsorted[i]);

    }
    printf("\n Sorted : ");
    for(int i = 0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }






    return 0;
}

