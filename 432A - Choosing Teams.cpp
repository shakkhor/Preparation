#include <iostream>
using namespace std;

int main() {
	int n,  i,x, k, ok = 0;
	cin>>n>>k;
	for(i=0; i<n; i++)
	{
		cin>>x;
		if(5-x>=k)
			ok++;
	}
	cout<<ok/3;
	
	return 0;
}