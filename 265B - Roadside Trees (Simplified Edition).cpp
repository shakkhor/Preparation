#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
int main() {
	int n,x,  i, t = 0, h = 0;
	cin>>n; 
	for(i = 0; i<n; i++){
		cin>>x;
		t+= abs(h-x)+1;
		if(i)
			t++;
		h = x;
	}
	cout<<t;
	return 0;
}