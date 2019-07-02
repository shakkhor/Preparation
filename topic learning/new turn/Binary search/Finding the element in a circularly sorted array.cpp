#include<bits/stdc++.h>
using namespace std;

int ara[100];


int findelement(int n, int x);
int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 0; i<n; i++)
    {
        scanf("%d",&ara[i]);

    }
    printf("\nelement you want to find:\n");
    int x;
    scanf("%d",&x);
    //findelement(int n,int x);
    printf("%d is found in %d th position\n",x,findelement(n,x)+1);

    return 0;
}

int findelement(int n, int x)
{
    int low = 0;
    int high = n-1;
    int mid = (high+low)/2;

    while(low<=high)
    {
        mid = (high+low)/2;
        if(ara[mid]==x)
            return mid;
        else if(ara[mid]<=ara[high])
        {
            if(x>ara[mid] && x<=ara[high])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        else if(ara[mid]>=ara[low])
        {
            if(x<ara[mid] && x>=ara[low])
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
    }
    return -1;
}
