#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	map <string, string>words; 
	int n, m;
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		string x, y;
		cin>>x>>y;
		words[x]=y;
		// cout<<words[x]<<endl;
	}
	for(int i=0; i<n; i++)
	{
		string x;
		cin>>x;
		int l1,l2;
		l1 = x.length();
		l2 = words[x].length();
		if(l2<l1)
		cout<<words[x];
		else
		cout<<x;
		cout<<' ';
	}
	return 0;
}