#include<stdio.h>
long long a, b, c, d, e, f;
long long ara[10010];
void init(int n);
long long fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(ara[n]!=-1) return ara[n];
    else
    {
        ara[n]=(fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) %10000007 ;
        return ara[n];
    }
}
int main() {

    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %d", &a, &b, &c, &d, &e, &f, &n);
        init(n);
        printf("Case %d: %lld\n", ++caseno, fn(n)%10000007);
    }
    return 0;
}

void init(int n)
{
    int i;
    for(i = 0; i<=n; i++)
    {
        ara[i]=-1;
    }
}
