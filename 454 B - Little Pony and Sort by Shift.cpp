#include <iostream>
using namespace std;

int main() {
	int s=0, cnt =0, n, ar[100000], i,x;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>ar[i];
		if(ar[i]<ar[i-1] && i){
			// cout<<"i->"<<i<<"s->"<<s;
			cnt++;
			s = i;
			// cout<<"i->"<<i<<" s->"<<s<<endl;
		}
		
	}
	if(!cnt)
		cout<<"0";
	else if(cnt==1 && ar[0]>=ar[n-1])
		cout<<n-s;
	else
		cout<<"-1";
		return 0;
}