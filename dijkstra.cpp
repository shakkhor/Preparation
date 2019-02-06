//djkastra

#include<iostream>
using namespace std;
int white = 0;
int red  = 200;
int black = 250;


int queue[100];
int start = 0;
int last = 0;
int color[100];

void push(int n){
	queue[last++] = n;
}

void pop(){
	start++;
}

bool not_empty(){
	if(start==last)
		return false;
	return true;
}

int front(){
	return queue[start];
}

int nodes, edges[100][100];
int cost[100];

void reset(){
	for(int i=0;i<100;i++){
		cost[i] = 50000;
		color[i] = white;
		
		for(int j; j<100;j++)
			edges[i][j] = 0;
	}
}

void djkastra(int src){
	
	cost[src] = 0;
	color[src] = red;
	push(src);
	
	while(not_empty())
	{	//cout<<"oka\n";
		int k = front();
		pop();
		for(int i = 1; i<=nodes; i++){
			//cout<<"for\n";
			if(edges[k][i] != 0 && cost[i] > cost[k]+edges[k][i])
			{
				cost[i]= cost[k]+edges[k][i];
				// if(color[i]==white)
				// {
				// 		push(i);
				// 		color[i] = red;
						
				// }
					push(i);
				
			}
		}
	}
	
}

int main()
{
	reset();
	int  eds;
	cin>>nodes>>eds;
	for(int i = 0; i<eds; i++){
		int x,y,c;
		cin>>x>>y>>c;
		edges[x][y] = c;
		edges[y][x] = c;
	}
	int n = 1;
	djkastra(n);
	//cout<<edges[1][5]<<" ";
	cout<<cost[2];
	
	return 0;
}