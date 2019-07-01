#include <iostream>
using namespace std;

int main() {
	int n,  i,x, ans = 0;
	cin>>n;
	for(i=0; i<n; i++)
	{
		ans+=(n-i)*i;
		
	}
	cout<<ans+n;
		return 0;
}