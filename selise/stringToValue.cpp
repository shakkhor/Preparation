#include <bits/stdc++.h>
using namespace std;

int operation(int a, int b, char op)
{
    if(op=='+')
    {
        return a+b;
    }
    else if(op=='*')
    {
        return a*b;
    }
    else if(op=='-')
    {
    	return a-b;
    }
    else 
    	return a/b;
}

int pre(char op)
{
    if(op == '+' || op == '-')
    {
        return 1;
    }
    if(op == '*' || op == '/')
    {
        return 2;
    }
    return 0;
}


int getvalue(string exp)
{

    int i;
    stack <int> num;


    //stack <int> mal;
    stack <char> optr;

    for(i=0; i<exp.length(); i++)
    {
        if(exp[i] == ' ')
            continue;


        else if(isdigit(exp[i]))
        {
            int val = 0;
            while(i<exp.length() && isdigit(exp[i]))
            {
                val = (val*10)+(exp[i]-'0');
                i++;
            }
            i--;
            num.push(val);
        }

        else
        {
            while(!optr.empty() && pre(optr.top())>= pre(exp[i]))
            {
                int val2 = num.top();
                num.pop();

                int val1 = num.top();
                num.pop();

                char op = optr.top();
                optr.pop();

                num.push(operation(val1, val2, op));
            }
            optr.push(exp[i]);
        }
    }
    while(!optr.empty())
    {
        int val2 = num.top();
        num.pop();

        int val1 = num.top();
        num.pop();

        char op = optr.top();
        optr.pop();

        num.push(operation(val1, val2, op));
    }
    return num.top();
}

int main()
{
    char s[1000];

    while(cin>>s)
    {
        cout<<getvalue(s)<< endl;
    }
    return 0;
}
