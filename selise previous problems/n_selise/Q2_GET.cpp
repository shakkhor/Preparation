#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <sstream>
#include <list>

using namespace std;

#define ms(a,b)             memset(a, b, sizeof(a))
#define pb(a)               push_back(a)
#define pi                  (2*acos(0))
#define oo                  0x7e7e7e7e
#define dd                  double
#define ll                  long long
#define ff                  float
#define MP                  make_pair
#define ERR                 10E-7
#define fr                  first
#define sc                  second
#define SZ(a)               (int)a.size()
#define all(a)              a.begin(),a.end()

#define intlim              2147483648
#define rtintlim            46340
#define llim                9223372036854775808
#define rtllim              3037000499

#define pall                pair<ll,ll>
#define padd                pair<dd,dd>
#define paii                pair<int,int>
#define ull                 unsigned long long
#define csprint             printf("Case %lld:\n", C++)
#define bpc                 __builtin_popcount
#define EQ(a,b)             (fabs(a-b)<ERR)
#define fast_input_output   ios_base::sync_with_stdio(0);cin.tie(0);
#define I                   ll

#define rep(i,n)            for(int i=0; i<n; i++)
#define per(i,n)            for(int i=n-1; i>=0; i--)

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




















