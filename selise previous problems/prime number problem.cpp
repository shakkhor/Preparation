#include<bits/stdc++.h>
using namespace std;

bool isprime(int n);
int main()
{
    int n;


    while(1==scanf("%d",&n))
    {
        /*if(isprime(n)) printf("Prime\n");
        else printf("Not prime\n");*/

        if(n<=3) printf("NO combination found\n");
        else if(n>3)
        {
            int trace=-1;
            int half = n/2+1;
            for(int i=2; i<=half; i++)
            {
                if(isprime(i) && isprime(n-i))
                {
                    trace =0;
                    printf("%d + %d\n",i,n-i);
                    break;
                }
            }
            if(trace !=0) printf("No combination found\n");
        }

    }

    return 0;
}


bool isprime(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    else if(n%2==0) return false;
    else
    {
        int sq = sqrt(n)+1;
        for(int i = 3; i<= sq; i+=2)
        {
            if(n%i==0)
            {
                return false;
            }
        }

        return true;

    }
}
