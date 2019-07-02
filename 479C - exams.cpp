#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int i, j, k ,best=-1,n;
    pair<int,int>time[5010];
    cin>>n;
 
    for(i=0;i<n;i++)
        cin>>time[i].first>>time[i].second;
 
    sort(time, time+n);
 
    for(i=0;i<n;i++)
    {
        if(best<=time[i].second)
            best=time[i].second;
        else
            best=time[i].first;
    }
    cout<<best;
 
    return 0;
 
}