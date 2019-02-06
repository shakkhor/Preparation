//0-1 knapsack

#include <iostream>
using namespace std;
int weight[100], cost[100], capacity,n;
int max(int a, int b){
	if(a>b)
		return a;
	return b;
}

int knapsack(int pos, int total_weight){
	
	if(pos == n)
		return 0;
	int profit_with, profit_without;
	if(total_weight + weight[pos]<= capacity)
		profit_with = cost[pos]+ knapsack(pos+1, total_weight + weight[pos]);
	else 
		profit_with = 0;
	profit_without = knapsack(pos+1, total_weight);
	
	return max(profit_with, profit_without);
}

int main() {
	int i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>weight[i]>>cost[i];
	cin>>capacity;	
	cout<<knapsack(0,0);	
	
	// your code goes here
	return 0;
}