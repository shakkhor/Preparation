#include<bits/stdc++.h>
using namespace std;

int arr[10000];

void Getfiltered(int skip,int pageSize, int pageNumber , int sortOrder, int isDistict)
{
    int k;
    int i=skip+(pageSize-1)*pageNumber-1;
    int j=skip+pageSize*pageNumber;

    //if(sortOrder==0)
    sort(arr+i,arr+(j+1));



    if(isDistict==1)
    {
        if(sortOrder==1)
        {
            for(k=j-1;k>=i;k--)
            {
                if(arr[k]!=arr[k-1])
                    printf("%d ",arr[k]);
            }
        }

        else
        {
            for(k=i;k<j;k++)
            {
                if(arr[k]!=arr[k-1])
                    printf("%d ",arr[k]);
            }
        }

    }

    else
    {
        if(sortOrder==1)
        {
            for(k=j-1;k>=i;k--)
            {
                printf("%d ",arr[k]);
            }
        }

        else
        {
            for(k=i;k<j;k++)
            {
                printf("%d ",arr[k]);
            }
        }
    }

    printf("\n");

}

int main()
{
    int n,i;
    int skip,pageSize,pageNumner,sortOder,isDistict;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    while(scanf("%d %d %d %d %d",&skip,&pageSize,&pageNumner,&sortOder,&isDistict)==5)
    {
        Getfiltered(skip,pageSize,pageNumner,sortOder,isDistict);
    }


    return 0;
}




















