#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int ans=-1;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if((s[i]-'0')%2==1)
		continue;
		ans=i;
		if(s[s.length()-1]>s[ans])
		break;
	}
	if(ans==-1)
	cout<<ans;
	else
	{
		swap(s[ans],s[s.length()-1]);
		cout<<s<<endl;
	}
	return 0;
}