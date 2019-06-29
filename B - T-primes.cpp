#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	map <string, string>words; 
	long long n, m,j;
	scanf("%lld",&n);
	for(int i=0; i<n; i++)
	{
		int count = 1;
		long long x;
		scanf("%lld",&x);
		long long sqr = sqrt(x);
		for(j = 2; j*j< sqr; j++)
			if(sqr%j == 0)
				break;
		
	if(j*j>sqr && sqr*sqr==x && x>1) printf("YES\n");
		else printf("NO\n");
		// cout<<words[x]<<endl;
	}

	return 0;
}