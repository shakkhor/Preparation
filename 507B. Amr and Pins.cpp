#include<bits/stdc++.h>
using namespace std;
 
#define         si(n)           scanf("%d",&n)
#define         sl(n)           scanf("%I64d",&n)
 
#define         pi(n)           printf("%d",&n)
#define         pl(n)           printf("%I64d",&n)
 
#define         pn              printf("\n")
#define         ph              printf(" ")
 
 
#define         W               0
#define         G               200
#define         B               555
 
#define         CLR(a,b,c)      memset(a,b,sizeof c)
 
#define         hey             int main()
#define         cya             return 0
 
hey
{
    double i,j,k,l,r,x,y,g,h, d;
 
    cin>>r>>g>>h>>x>>y;
 
    d = sqrt((g-x)*(g-x)+(h-y)*(h-y));
 
    cout<<ceil(d/(2*r));
 
    cya;
 
}