#include<bits/stdc++.h>

using namespace std;

int matrix1[20][20],matrix2[20][20],r,c;

void Swap(int &num1,int &num2)
{
    int num = num1;
    num1 = num2;
    num2 = num;
}

void Print(int row,int col)
{
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
}

void findRowCol(int num,int row,int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(matrix2[i][j]==num)
            {
                r = i;
                c = j;
                return;
            }
        }
    }
}


int main(int args,char* argv[])
{
    int row,col;

    while(cin>>row>>col)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin>>matrix1[i][j];
            }
        }

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin>>matrix2[i][j];
            }
        }

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(matrix2[i][j] == matrix1[i][j])
                {
                    continue;
                }
                if(matrix2[i][j] != matrix1[i][j])
                {
                    findRowCol(matrix1[i][j],row,col);
                    Swap(matrix2[i][j],matrix2[r][c]);
                }
            }
        }
        Print(row,col);
        cout<<endl;
    }

    return 0;
}
