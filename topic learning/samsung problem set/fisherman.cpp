#include<iostream>
using namespace std;

int point[100], n;


int left_calculation(int p , int x)
{
    int dist = 0;

    for(int i = 1; i<=x; i++)
    {
        int l =0, r = 0, flag =1;

        for(int j = p ; j>= 1; j--)
        {
            if(point[j]==0)
            {
                l++;
                flag = 0;
                break;
            }
            l++;
        }

        if(flag)
        {
            l = 1000;
        }
        flag = 1;

        for(int j = p; j<=n; j++ )
        {
            if(point[j]==0)
            {
                r++;
                flag = 0;
                break;
            }
            r++;
        }

        if(flag)
        {
            r = 1000;
        }

        if(l<=r)
        {
            dist+= r;
            point[p-l+1]=1;
        }
        else
        {
            dist+=r;
            point[p+r-1]=1;
        }
    }

    return dist;
}


int right_calculation(int p, int x)
{
    int dist = 0;
    for(int i =1; i<=x; i++)
    {
        int l =0, r = 0, flag =1;

        for(int j = p; j>=1; j--)
        {
            if(point[j]==0)
            {
                l++;
                flag = 0;
                break;
            }
            l++;
        }
        if(flag)
        {
            l = 1000;
        }
        flag = 1;

        for(int j = p ;j<=n; j++)
        {
            if(point[j]==0)
            {
                r++;
                flag = 0;
                break;
            }
            r++;
        }

        if(flag)
        {
            r = 1000;
        }
        if(l<r)
        {
            dist+=1;
            point[p-l+1]=1;
        }
        else
        {
            dist+=r;
            point[p+r-1]=1;
        }
    }

    return dist;

}


int main()
{
    int t;
    cin>> t;
    for(int test = 1; test<=t; test++)
    {
        cin>>n ;

        int ans = 1000;
        int gate[10][10];

        for(int i =1; i<=3; i++)
        {
            int p,m;
            cin>>p>>m;
            gate[i][1]= p;
            gate[i][2]= m;
        }

        for(int i =1; i<=3; i++)
        {
            for(int j =1; j<=3; j++)
            {
                if(i==j) continue;

                for(int k =1; k<=3; k++)
                {
                    if(i==k || j==k) continue;

                    int dist = 0;

                    for(int x = 1; x<=n; x++)
                    {
                        point[x]=0;
                    }
                    dist += left_calculation(gate[i][1], gate[i][2]);
                    dist += left_calculation(gate[j][1], gate[j][2]);
                    dist += left_calculation(gate[k][1], gate[k][2]);

                    if(ans > dist) ans = dist;
                    dist = 0;

                    for(int x =1; x<=n; x++)
                    {
                        point[x]=0;

                    }
                    dist += right_calculation(gate[i][1], gate[i][2]);
                    dist += right_calculation(gate[j][1], gate[j][2]);
                    dist += right_calculation(gate[k][1], gate[k][2]);

                    if(ans > dist)  ans =dist;
                }
            }
        }

        //printf("#%d %d", test, ans);
        cout<<"#"<<test<<": "<<ans<<endl;



    }


    return 0;
}
