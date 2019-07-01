#include <iostream>
using namespace std;
int mod = 1000000007;
int main() {
	int n,  i,x,y, k, ok = 0;
	cin>>x>>y>>n;
switch (n%6)
{
    case 1: ok = x%mod;
        break;
    case 2: ok = y%mod;
        break;
    case 3: ok = (y-x)%mod;
    	break;
    case 4: ok = -x%mod;
    	break;
    case 5: ok = -y%mod;
    	break;
    case 0: ok = (x-y)%mod;
    default: 
    	break;
}	
	if(ok<0)
		cout<<mod+ok;
	else
		cout<<ok;
	
	return 0;
}