#include<bits/stdc++.h>

using namespace std;

#define rang .0000000001

double findSqrt(int num)
{
    int i = 1;
    while(i*i<=num)
    {
        i++;
    }
    i--;
    if(i*i==num)
    {
        return i;
    }

    double beg = 0.00000000001,en=.99999999999,mid;

    while(1)
    {
        mid = (beg+en)/2.0;
        double Sqrt = (double)(i+mid)*(i+mid);
        if(abs(Sqrt-num) <= rang)
        {
            return i+mid;
        }
        else if(Sqrt<num)
        {
            beg = mid;
        }
        else
        {
            en = mid;
        }
    }
}

int main(int args,char* argv[])
{
    double S;
    int num;
    while(cin>>num)
    {
        S = findSqrt(num);
        cout.precision(11);
        cout<<S<<endl;
    }
    return 0;
}
