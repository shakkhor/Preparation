#include<bits/stdc++.h>

using namespace std;

int arr[100000];

void Swap(int &num1,int &num2)
{
    int num = num1;
    num1 = num2;
    num2 = num;
}

void Sort(int i,int j,int oR)
{
    for(int k=i;k<j;k++)
    {
        for(int l=k+1;l<=j;l++)
        {
            if(oR == 0)
            {
                if(arr[k]>arr[l])
                {
                    Swap(arr[k],arr[l]);
                }
            }
            else
            {
                if(arr[k]<arr[l])
                {
                    Swap(arr[k],arr[l]);
                }
            }
        }
    }
}

void detFiltered(int s,int pS,int pN,int oR,int num)
{
    int j = s+(pS*pN)-1;
    int i = s+(pS*(pN-1));

    if(i>=num)
    {
        cout<<"Invalid...";
        return;
    }
    if(j>num)
    {
        j = num-1;
    }

    ///cout<<i<<" "<<j<<endl;

    Sort(i,j,oR);

    for(int k=i;k<=j;k++)
        cout<<arr[k]<<" ";

}

int main(int args,char* argv[])
{
    int skip,pageSize,pageNum,sortOrder,num;

    while(cin>>num)
    {
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
        }
        cin>>skip>>pageSize>>pageNum>>sortOrder;

        detFiltered(skip,pageSize,pageNum,sortOrder,num);
        cout<<endl;
    }
}

/*
16
2 4 7 2 3 9 6 5 2 4 1 3 4 1 6 3
2 4 3 1
*/


