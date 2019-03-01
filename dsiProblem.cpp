#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int ans  = 0;
	for(int i =0; i<n; i++)
	{
		int product=1,x;
		cin>>x;
		if(!x)
			continue;
		while(x)
		{
			product*= x%10;
			x/=10;
		}
		ans+=product;
	}
	cout<<ans;
	return 0;
}