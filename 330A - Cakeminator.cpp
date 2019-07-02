#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int r,c,ans,x;
	int a[12][12];
	cin>>r>>c;
	for(int i=0; i<r; i++){
		for(int j= 0; j<c; j++)
		{
			char k;
			cin>>k;
			if(k=='.')
				a[i][j]=1;
			else
				a[i][j]=-1; 
		}
	}
	ans = 0;
	for(int i =0; i<r; i++){
		int chk = 0;
		for(int j =0; j<c; j++)
		{
			if(a[i][j]==1){
				chk++;
				// a[i][j]=0;
			}
			else if(a[i][j]==-1)
			{
				chk=0;
				break;
			}
		
		}
		// cout<<"chk  "<<r<<endl;
		if(chk==c)
		{
			ans+= chk;
			// cout<<"chk  "<<chk<<endl;
			for(int z =0; z<c; z++)
				a[i][z]=0;
		}
		
	}
	
	
	// for(int x=0; x<r; x++)
	// {
	// 	for(int y=0; y<c; y++){
	// 		cout<<a[x][y]<<"  ";
	// 	}
	// 	cout<<endl;
	// }
	for(int i =0; i<c; i++){
		int chk = 0;
		for(int j =0; j<r; j++)
		{
			if(a[j][i]==1){
				chk++;
			
			}
			else if(a[j][i]==-1)
			{
				chk=0;
				break;
			}
		}
		// cout<<"chk2  "<<chk<<endl;
		if(chk==r)
		{
			for(int z =0; z<c; z++)
				a[z][i]=0;
		}
		ans+= chk;

	}
	cout<<ans;
	return 0;
}