#include <stdio.h>

int solve(int n)
{
    if(n==1)
    	return 0;
    if(n%3==0)
        return solve(n/3)+1;
    return solve(n-1) + 1;
}

int main() {
	//code

	int T, n;
	scanf("%d",&T);
	for(int i = 1;i<=T; i++)
	{
		scanf("%d",&n);
		int ans = solve(n);
		printf("%d\n",ans);
	}
	    
	
	    
	return 0;
}