/*
problem: selection sort
author : Sourav
CSE SUST
Reg No.: 2014331039

*/

#include<bits/stdc++.h>
using namespace std;

void selectionsort();
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

    selectionsort();
    printf("\nsorted :");
    for(int i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }


    return 0;
}

void selectionsort()
{
    int temp, index,mini;
    for(int i=0; i<n; i++)
    {
        mini = ara[i];
        index = i;
        for(int j = i+1;j<n; j++)
        {
            if(mini>ara[j])
            {
                mini = ara[j];
                index = j;
            }
        }
        temp = ara[i];
        ara[i]=ara[index];
        ara[index]=temp;

    }
}




