#include <iostream>
using namespace std;

int color[250] = {0};
int edges[250][250] = {0};
int nodes;

int red = 200;
int black = 250;
int white  = 0;

int start = 0;
int last = 0;
int queue[100];

void push(int n){
	queue[last++] = n;
}


void pop(){
	start++;
}

int front(){
	return(queue[start]);
}
bool not_empty(){
	if(start==last)
		return false;
	return true;
}

bool bicolor(int s){
	push(s);
	color[s] = red;
	while(not_empty())
	{
		int k  = front();
		pop();
		for(int i= 0; i<nodes;i++)
		{
			if(edges[k][i]==1 && color[i]== white)
			{
				if(color[k]==red)
					color[i] = black;
				else 
					color[i] = red;
				push(i);	
			
			}
			
			else if(color[i] == color[k] && edges[k][i]==1)
				return false;
			
			
		}
	}
	
	return true;
}

int main() {
	int i;
	cin>>nodes;
	for(i=0;i<nodes;i++)
	{	int x,y;
		cin>>x>>y;
		edges[x][y]=1;
		edges[y][x]=1;
	}
	if(bicolor(0))
		cout<<"yes";
	else 
		cout<<"No";
	
	
	return 0;
}