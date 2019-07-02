#include<bits/stdc++.h>
using namespace std;
int main()
{
    //printf("okay for onsite\n");

    stack< char > exp;
    stack< int > num;

    int n;
    char ch;
    while(scanf("%d%c",&n,&ch))
    {

        if(ch=='\n')
        {
            num.push(n);
            break;
        }
        num.push(n);
        exp.push(ch);

    }
    int total =0;
    int mul value = 1;
    while(!num.empty())
    {
        /*printf("%d\n",num.top());
        num.pop();
        printf("%c\n",exp.top());
        exp.pop();*/

        int x = num.top();
        num.pop();
        char ch = exp.top();

        if(exp.top()=='+')
        {
            if(trace==1)
            {
                total+=current;
            }
            else if(trace==0)
            {
                total+=x;
            }


        }
        else if(exp.top()=='*')
        {
            trace =1;


        }



    }



    return 0;
}
