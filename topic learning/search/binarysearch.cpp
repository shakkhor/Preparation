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
    freopen("binarysearch.txt","r",stdin);
    int n;
    printf("Enter how many number you want to take as input");
    scanf("%d",&n);

    int ara[n];

    for(int i =1 ; i<=n; i++)
    {
        printf("Enter Number: ");
        scanf("%d",&ara[i-1]);
        printf("you have entered : %d",ara[i-1]);
        printf("\n");
    }
    int found;

    scanf("%d",&found);
    //printf("okay");

    int low=1 , high=n, mid=(low+high)/2;
    int c = 0;

    for(int i = 0; i<n; i++)
    {
        printf("index no. : %d and value: %d\n",i,ara[i]);
    }



    while(low<mid)
    {

        if(ara[mid-1]== found)
        {
            printf("found  on %d th index\n",mid);
            printf("c  & mid er value: %d %d",c,mid);
            break;
        }
        else if(ara[mid-1]>found)
        {
            high=mid;

        }
        else if(ara[mid-1]<found)
        {
            low = mid;
        }
        c++;
        printf("okay");
        mid= (low + high)/2;

    }
    return 0;
}
