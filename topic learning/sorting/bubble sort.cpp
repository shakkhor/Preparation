/*
problem: bubble sort
author : Sourav
CSE SUST
Reg No.: 2014331039

*/

#include<bits/stdc++.h>
using namespace std;

void bubblesort();
int ara[100],n;

int main()
{
    freopen("selectionsort.txt","r",stdin);

    //input
    printf("Enter how many numbers you want to sort: ");
    scanf("%d",&n);

    printf("Enter those number by space seperated: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("\nunsorted: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }

    bubblesort();
    printf("\nsorted :");
    for(int i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }


    return 0;
}

void bubblesort()
{
    for(int i = 0; i<n-1; i++)
    {
        bool flag =0;
        for(int j=0;j<n-1; j++)
        {
            if(ara[j]>ara[j+1])
            {
                int temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;
                flag = 1;
            }
        }
        if(flag ==0) break;
    }
}





