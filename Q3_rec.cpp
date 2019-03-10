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

int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        int i,x1[100000],y1[100000],x2[100000],y2[100000],mx1=-oo , my1=-oo , mx2=oo ,my2=oo,area=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d %d %d %d",&x1[i],&y1[i],&x2[i],&y2[i]);
        }

        for(i=1;i<=n;i++)
        {
            mx1=max(mx1,x1[i]);
            my1=max(my1,y1[i]);
            mx2=min(mx2,x2[i]);
            my2=min(my2,y2[i]);

            printf("    %d      %d      %d      %d\n",mx1,my1,mx2,my2);
        }

        if(!(mx2<mx1 && my2<my1))
            area=abs((mx2-mx1)*(my2-my1));

        printf("%d\n",area);

    }

    return 0;
}






