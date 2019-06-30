#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int k, mx = -1;
	cin>>k;
	map<char,int>values;
	char x = 'a';
	for(int i =0;i<26; i++){
		int pp;
		cin>>pp;
		if(mx<pp)
			mx = pp;
		values[x]=pp;
		x++;
	}
	int ans = 0;
	for(int i =0; i<s.length()+k; i++)
	{
		if(i<s.length())
			ans+= values[s[i]]*(i+1);
		else
			ans+= mx*(i+1);
	}
	
	cout<<ans;
	return 0;
}