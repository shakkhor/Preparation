#include <bits/stdc++.h>
using namespace std;  
int main()
{
	int n,s,t;
	cin>>n>>s>>t;
	int p[n];
	for(int i=0;i<n;i++)
		cin>>p[i];
	int f=s;
	for(int i=0;i<n;i++) 
	 { //cout<<"Fstart---->"<<f<<endl;
		if(f==t) 
			{
				cout<<i;
				return 0;
			}
		f=p[f-1];
		// cout<<"Fchange---->"<<f<<endl;
	}
	cout<<-1;
	return 0;
}
