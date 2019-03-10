#include<bits/stdc++.h>

using namespace std;

int arr[100000];

double findAvg(int num,int sum)
{
    int min1 = INT_MAX,min2 = INT_MAX;
    double avg;

    for(int i=0;i<num;i++)
    {
        if(arr[i]<=min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i]<min2)
        {
            min2 = arr[i];
        }
    }
    ///cout<<min1<<" "<<min2<<" "<<sum<<endl;
    avg = (double)(sum-min1-min2)/(num-2);
    return avg;
}

int main(int args,char* argv[])
{
    int num,sum=0;
    double avg;

    while(cin>>num)
    {
        sum = 0;
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        avg = findAvg(num,sum);
        cout.precision(6);
        cout<<avg<<endl;
    }

    return 0;
}
