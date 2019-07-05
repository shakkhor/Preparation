#include <bits/stdc++.h>
using namespace std;

void printTo(int n)
{
	if(n>1)
		printTo(n-1);
	cout<<n<<endl;
}
void printFrom( int n)
{
	cout<<n<<endl;
	if(n==1)
		return;
	printFrom(n-1);
}

int sum(int n)
{
	if(n==1)
		return 1;
	return n+sum(n-1);
}

void loopRec(int k, int n)
{
	for(int i = k; i<=n; i++)
	{
		cout<<"k-->"<<k<<"  i-->"<<i<<endl;
		
		k = i+1;
		loopRec(k,n);
	//	i=11;
	//	k = 11;
	return; 
	}
}

int main() {
	
	//printFrom(10);
	//cout<<sum(100);
	loopRec(1,10);
	return 0;
}
