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

int arr[100][100];
int k;


int main()
{
    int peak,i,j;

    while(scanf("%d",&peak)==1)
    {
        memset(arr,0,sizeof(arr));

        k=1;
        for(i=0;i<=peak/2;i++)
        {
            arr[i][peak/2]=k++;

            for(j=1;j<(i+1);j++)
            {
                arr[i][peak/2-j]=k++;
                //arr[i][peak/2+j]=k++;
            }

            for(j=1;j<(i+1);j++)
            {
                arr[i][peak/2+j]=k++;
            }
        }

        for(i=peak/2+1;i<peak;i++)
        {
            arr[i][peak/2]=k++;

            for(j=1;j<peak-i;j++)
            {
                arr[i][peak/2-j]=k++;
                //arr[i][peak/2+j]=k++;
            }

            for(j=1;j<peak-i;j++)
            {
                arr[i][peak/2+j]=k++;
            }
        }

        for(i=0;i<peak;i++)
        {
            for(j=0;j<peak;j++)
                printf("%6d ",arr[j][i]);
            printf("\n");
        }
    }

    return 0;
}











