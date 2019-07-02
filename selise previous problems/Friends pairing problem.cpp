#include<bits/stdc++.h>
using namespace std;


int dp[100];
int pairing(int n)
{
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    else if(n>2)
    {
        return dp[n]= pairing(n-1)+ (n-1)*pairing(n-2);
    }
    else
    {
        return dp[n]=n;
    }

}


int main()
{
    int n;
    while(1==scanf("%d",&n))
    {
        memset(dp,-1,sizeof(dp));
        printf("%d\n",pairing(n));
    }


    return 0;
}
